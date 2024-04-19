/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:45:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/19 16:19:26 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	ft_display_file( const char *filename )
{
	std::map<std::string, double> tab;
	std::ifstream infile(filename);

	if (!infile.is_open())
	{
		std::cerr << "Couldn't open the file: " << filename << std::endl;
		return (1);
	}
	for (std::string line; std::getline(infile, line);)
	{
		std::cout << line << std::endl;
		std::istringstream ss(line);
	}
	infile.close();
  return (0);
}

int	ft_check_file( char **av )
{
	(void) av;
	return (0);
}

int main( int ac, char **av )
{
	if (ac != 2 || ft_check_file(av))
		return (std::cerr << "Error : could not open file." << std::endl, 1);

	BitcoinExchange file_input(av[1]);

	ft_display_file(DATA);
	return (0);
}
