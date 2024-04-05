/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 19:10:31 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.class.hpp"
#include <cctype>
#include <cstdlib>
#include <limits>
#include <cstring>

static void double_Print( double nb)
{
	std::cout << "double : " << nb;
	if (nb == static_cast<int> (nb) && nb < 1000000)
		std::cout << ".0";
	std::cout << std::endl;
	return ;
}

static void	float_Print( float x )
{
	std::cout << "float : " << x;
	if (x == static_cast<int> (x) && x < 1000000)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	return ;
}

static void int_Print( long nb )
{
	std::cout << "int : " << nb << std::endl;
	return ;
}

static void	char_Print( unsigned int c )
{
	if (c < 0 || (c >= 0 && c < 32)|| c > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
	return ;
}

void 	ScalarConverter::convert( std::string str )
{
	long 	x = 0;
	float	y = 0;
	double	z = 0;
	char 	*nptr = NULL;
	std::string limits_ng[4] = { "-inf", "-inff", "inf", "inff",};


	x = std::strtol(str.c_str(), &nptr, 10);

	if (str.length() == 1 && strlen(nptr) == 1 && (std::isprint(str.c_str()[0])))
	{
		char_Print(nptr[0]);
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		return ;
	}
	if (nptr[0])
	{
		z = std::strtod(str.c_str(), &nptr);
		if (nptr[0] == 'f' && strlen(nptr) == 1 && !(x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min()))
		{
			y = std::strtof(str.c_str(), &nptr);
			char_Print(static_cast<unsigned int> (y));
			int_Print(static_cast<int> (y));
			float_Print(static_cast<float> (y));
			double_Print(static_cast<double> (y));
			return ;
		}
		else if (!nptr[0] && !(x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min()))
		{
			char_Print(static_cast<unsigned int> (z));
			int_Print(static_cast<int> (z));
			float_Print(static_cast<float> (z));
			double_Print(static_cast<double> (z));
			return ;
		}
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		for (int i = 0; i < 4; i++)
		{
			if (str == limits_ng[i])
			{
				switch (i)
				{
					case 0:
					case 1:
						std::cout << "float : -inff" << std::endl;
						std::cout << "double : -inf" << std::endl;
						return ;
					case 2:
					case 3:
						std::cout << "float : inff" << std::endl;
						std::cout << "double : inf" << std::endl;
						return ;
				}
			}
		}
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	else if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
	{
		z = std::strtod(str.c_str(), &nptr);
		if (nptr[0] == 'f' && strlen(nptr) == 1)
		{
			y = std::strtof(str.c_str(), &nptr);
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : " << y << nptr << std::endl;
			std::cout << "double : " << y << std::endl;
		}
		else
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			float_Print(static_cast<float> (z));
			double_Print(static_cast<double> (z));
		}
	}
	else
	{
		char_Print(static_cast<unsigned int> (x));
		int_Print(static_cast<int> (x));
		float_Print(static_cast<float> (x));
		double_Print(static_cast<double> (x));
	}
	return ;
}


ScalarConverter & ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

ScalarConverter::ScalarConverter( const ScalarConverter &obj )
{
	(void) obj;
	if (CONS)
		std::cout << "ScalarConverter : Copy constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( void )
{
	if (CONS)
		std::cout << "ScalarConverter : Default constructor called" << std::endl;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	if (CONS)
		std::cout << "ScalarConverter : Destructor called" << std::endl;
	return ;
}
