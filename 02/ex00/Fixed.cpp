/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 11:32:20 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getBits( void )
{
	return (_bits);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits constructor called" << std::endl;
	return (this->_fixed_points);
}

void	Fixed::setRawBits(  int const raw )
{
	this->_fixed_points = raw;
	return ;
}

Fixed & Fixed::operator=( const Fixed &fixed )
{
	if (this != &fixed)
		this->_fixed_points = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed( const Fixed &fixed ) : _fixed_points(fixed.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed( void ) : _fixed_points(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
