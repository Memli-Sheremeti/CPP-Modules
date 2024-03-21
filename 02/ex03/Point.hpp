/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 11:36:14 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <iostream>
# include <cmath>
# include <stdio.h>
# include "Fixed.hpp"

class Point
{
	public:

		Point( void );
		Point( const float & x, const float & y );
		Point( const Point &Point );
		~Point( void );
		Point&	operator=( const Point &Point );

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
	private:

		Fixed const _x;
		Fixed const _y;
};

bool			bsp( Point const a, Point const b, Point const c, Point const point );
std::ostream& 	operator<<( std::ostream& os, const Fixed& obj );

#endif
