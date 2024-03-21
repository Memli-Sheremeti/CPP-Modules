/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 11:12:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}

Point & Point::operator=( const Point & obj )
{
	if (this != &obj)
	{
		(Fixed) this->_x = obj.getX();
		(Fixed) this->_y = obj.getY();
	}
	return (*this);
}

Point::Point( const Point & obj) : _x(obj.getX()), _y(obj.getY())
{
	if (CONS)
		std::cout << "Point : Copy constructor called" << std::endl;
	return ;
}

Point::Point( const float & x, const float & y ) : _x(x), _y(y)
{
	if (CONS)
		std::cout << "Point : constructor called" << std::endl;
	return ;
}


Point::Point( void ) : _x(0) , _y(0)
{
	if (CONS)
		std::cout << "Point : Default constructor called" << std::endl;
	return ;
}

Point::~Point( void )
{
	if (CONS)
		std::cout << "Destructor called" << std::endl;
	return ;
}
