/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:35:47 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/23 15:18:32 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <stdio.h>
# include <string.h>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <algorithm>
# include <map>
# include <ctime>

# define DATA "cpp_09/data.csv"

class BitcoinExchange
{
	private :

	std::map<std::string, double> tab;

	BitcoinExchange( BitcoinExchange const & obj );
	BitcoinExchange & operator=(BitcoinExchange const & obj);

	public :


	BitcoinExchange( void ) { return ; }
	~BitcoinExchange() { return ; }

	std::map<std::string, double> getFilesValue( void ) const;
	void	setFilesValue( void );
	void	displayFileRes( std::string data );
};

# endif
