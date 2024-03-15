/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/15 15:25:22 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <stdio.h>


int	Fixed::get_bits( void )
{
	return (_bits);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	return ( a < b ? a : b );
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
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
	if (CONS)
		std::cout << "Copy constructor called" << std::endl;
	if (this != &fixed)
	{
		this->_fixed_points = fixed.getRawBits();
	}
	return (*this);
}

Fixed Fixed::operator+( const Fixed &fixed ) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (res);
}

Fixed & Fixed::operator++( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed old = *this;

	old = *this;
	operator++();
	return (old);
}

Fixed	Fixed::operator-( const Fixed &fixed ) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (res);
}

Fixed & Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed old;

	old = *this;
	operator--();
	return (old);
}

Fixed	Fixed::operator*( const Fixed &fixed ) const
{
	Fixed res;

	res.setRawBits((this->toFloat() * fixed.toFloat()) * (1 << this->get_bits()));
	return (res);
}

Fixed	Fixed::operator/( const Fixed &fixed ) const
{
	Fixed res;

	res.setRawBits((this->toFloat() * fixed.toFloat()) / (1 << this->get_bits()));
	return (res);
}

bool	Fixed::operator<( const Fixed &fixed ) const
{
	if (this->getRawBits() < fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=( const Fixed &fixed ) const
{
	if (this->getRawBits() <= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>( const Fixed &fixed ) const
{
	if (this->getRawBits() > fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=( const Fixed &fixed ) const
{
	if (this->getRawBits() >= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==( const Fixed &fixed ) const
{
	if (this->getRawBits() == fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=( const Fixed &fixed ) const
{
	if (this->getRawBits() != fixed.getRawBits())
		return (true);
	return (false);
}

Fixed::Fixed( const int a )
{
	this->_fixed_points = a << this->get_bits();
	if (CONS)
		std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float f )
{
	this->_fixed_points = roundf(f * (1 << this->get_bits()));
	if (CONS)
		std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed( void ) : _fixed_points(0)
{
	if (CONS)
		std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	if (CONS)
		std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
