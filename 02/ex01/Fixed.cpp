/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 11:27:52 by mshereme         ###   ########.fr       */
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
<<<<<<< HEAD
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
=======
	if ( a > 2^23 ) 
	{
		// print une erreur forcer la valeur a etre sous 2^23
		//
	} 
>>>>>>> bafdc9083a05df9fc452e8c69d9b0cfa6fa09f0f
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
