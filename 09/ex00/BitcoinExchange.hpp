/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:35:47 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/19 16:19:09 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <algorithm>
# include <map>
# include <vector>

# define DATA "cpp_09/data.csv"

class BitcoinExchange
{
	private :

	std::map<std::string, double> tab;

	BitcoinExchange( void ) { return ; }
	BitcoinExchange( BitcoinExchange const & obj );
	BitcoinExchange & operator=(BitcoinExchange const & obj);

	public :

	BitcoinExchange( char *string) { (void) string; return; }
	~BitcoinExchange() { return ; }


};

# endif
