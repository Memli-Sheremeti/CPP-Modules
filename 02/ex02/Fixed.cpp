/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 13:58:27 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------------------- OTHER Operators -------------------------------------

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

Fixed & Fixed::operator++( void )
{
	this->_fixed_points++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed old = *this;

	old = *this;
	operator++();
	return (old);
}

Fixed & Fixed::operator--( void )
{
	this->_fixed_points--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed old;

	old = *this;
	operator--();
	return (old);
}

// ----------------------- OPERATEUR -------------------------------------------

Fixed Fixed::operator+( const Fixed &fixed )
{
	Fixed res;
	int x;

	x = (this->getRawBits() + fixed.getRawBits());
	res.setRawBits(x);
	return (res);
}

Fixed	Fixed::operator-( const Fixed &fixed )
{
	Fixed res;
	int x;

	x = (this->getRawBits() - fixed.getRawBits());
	res.setRawBits(x);
	return (res);
}

Fixed	Fixed::operator*( const Fixed &fixed )
{
	Fixed	res;
	int 	result;

	result = (int64_t) this->_fixed_points * (int64_t) fixed._fixed_points / (1 << this->get_bits());
	res.setRawBits(result);
	return res ;
}

Fixed	Fixed::operator/( const Fixed &fixed )
{
	Fixed	res;
	int 	result;

	result = ((int64_t) this->_fixed_points * (1 << this->get_bits())) / fixed._fixed_points;
	res.setRawBits(result);
	return res ;
}

// ----------------------- COMPARISON ------------------------------------------

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

// ----------------------- CANONIC ---------------------------------------------

Fixed & Fixed::operator=( const Fixed &fixed )
{
	if (this != &fixed)
		this->_fixed_points = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed( const Fixed &fixed ) : _fixed_points(fixed.getRawBits())
{
	if (CONS)
		std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int a )
{
	if (a > 8388607)
	{
		std::cout << "int too big recast in 8388607" << std::endl;
		this->_fixed_points = 8388607 * (1 << this->get_bits());
		return ;
	}
	else if (a < -8388608)
	{
		std::cout << "int too small recast in -8388608" << std::endl;
		this->_fixed_points = -8388608 * (1 << this->get_bits());
		return ;
	}
	this->_fixed_points = a * (1 << this->get_bits());
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float f )
{
	if (f > 8388607.0f)
	{
		std::cout << "float too big recast in 8388607.0f" << std::endl;
		this->_fixed_points = roundf(8388607.0f * (1 << this->get_bits()));
		return ;
	}
	else if (f < -8388608.0f)
	{
		std::cout <<  "float too big recast in 8388608.0f" << std::endl;
		this->_fixed_points = roundf(-8388608.0f * (1 << this->get_bits()));;
		return ;
	}
	this->_fixed_points = roundf(f * (1 << this->get_bits()));
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
