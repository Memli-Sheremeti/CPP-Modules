/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 14:34:56 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::get_bits( void )
{
	return (_bits);
}

float	Fixed::toFloat( void ) const
{
	float	res;

	res = (float) this->getRawBits() / (1 << this->get_bits());
	return (res);
}

int	Fixed::toInt( void ) const
{
	return (this->_fixed_points / (1 << this->get_bits()));
}

int	Fixed::getRawBits( void ) const
{
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

Fixed::Fixed( const int a )
{
	this->_fixed_points = a * (1 << this->get_bits());
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float f )
{
	this->_fixed_points = roundf(f * (1 << this->get_bits()));
	std::cout << "Float constructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
