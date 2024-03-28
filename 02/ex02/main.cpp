/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 13:26:22 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( 100 );
	Fixed d( 100 );
	Fixed e( 2 );
	Fixed g(100000);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "----------------------------" << std::endl;

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	c = c + d;
	d = c + e;

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << "----------------------------" << std::endl;

	c = c / e;
	e = c * e;
	std::cout << c << std::endl;
	std::cout << e << std::endl;

	c = c - d;
	e = e - d;

	std::cout << c << std::endl;
	std::cout << e << std::endl;

	std::cout << "----------------------------" << std::endl;

	std::cout << g << std::endl;
	std::cout << e << std::endl;

	g = g * e;

	std::cout << g << std::endl;
	std::cout << e << std::endl;


	std::cout << "----------------------------" << std::endl;

	std::cout << g << std::endl;
	std::cout << e << std::endl;

	g = g / e;

	std::cout << g << std::endl;
	std::cout << e << std::endl;
	return (0);
}
