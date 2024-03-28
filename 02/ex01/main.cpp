/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 11:28:31 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int main( void )
{
	Fixed a;
	Fixed a_;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed const e( 10000000 );


	a = Fixed( 1234.4321f );
	a_ = Fixed( -8388608.0f );

	std::cout << "a is " << a << std::endl;
	std::cout << "a_ is " << a_ << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "a_ is " << a_.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

	return (0);
}
