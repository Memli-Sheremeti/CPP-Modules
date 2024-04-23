/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:28:37 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/23 16:14:14 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int		check_date( std::string line, std::map<std::string, double> & tab)
{
	struct tm tm;
	std::map<std::string, double>::iterator it = tab.begin();
	std::string date;
	std::istringstream date_data(line);

	date_data >> date;
	date = date.substr(0, 10);
	if (!strptime(date.c_str(), "%Y-%m-%d", &tm) || (date < it->first))
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	return (1);
}

int		check_value( std::string line, std::map<std::string, double> & tab)
{
	std::map<std::string, double>::iterator it;
	double value;

	std::string date;
	std::istringstream date_data(line);

	date_data >> date;
	date = date.substr(0, 10);
	std::string pos;
	pos = line.substr(12, line.size());
	if (pos.) // A checker si il y a autre chose qu'un num ou whites space ou tiret ou point
	std::istringstream value_data(pos);
	value_data >> value;
	if ( 0 <= value && value <= 1000)
	{
		it = tab.upper_bound(date);
		it--;
		std::cout << date << " => " << value << " = " << it->second * value << std::endl;
	}
	else if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else
		std::cout << "Error: too large a number." << std::endl;
	return (1);
}

std::map<std::string, double> BitcoinExchange::getFilesValue( void ) const
{
	return this->tab;
}

void	BitcoinExchange::setFilesValue( void )
{
	std::string date;
	std::string pos;
	double value;
	std::ifstream infile( DATA );

	if (!infile.is_open())
	{
		std::cerr << "Couldn't read file: " << DATA << std::endl;
		return ;
	}

	std::getline(infile, date);
	for (std::string line; std::getline(infile, line);)
	{
		std::istringstream date_data(line);
		date_data >> date;
		date = date.substr(0, 10);
		pos = line.substr(11, line.size());
		std::istringstream value_data(pos);
		value_data >> value;
		this->tab[date] = value;
	}
	infile.close();
	return ;
}

void	BitcoinExchange::displayFileRes( std::string data )
{
	// for (std::map<std::string,double>::iterator it=tab.begin(); it!=tab.end(); ++it)
    // 	std::cout << it->first << " => " << it->second << '\n';

	std::ifstream infile( data.c_str() );

	if (!infile.is_open())
	{
		std::cerr << "Couldn't read file: " << data << std::endl;
		return ;
	}
	for (std::string line; std::getline(infile, line);)
	{
		if (line == "date | value")
			continue ;
		if (!check_date(line, this->tab))
			continue ;
		if (!(line.find('|', 0)) || line.size() < 13)
		{
			std::cerr << "Error: bad input" << std::endl;
			continue;
		}
		check_value(line, this->tab);
	}
	return ;
}
