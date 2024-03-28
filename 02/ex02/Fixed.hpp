/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/22 09:21:48 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <stdio.h>
# define CONS	0

class Fixed
{
	public:

		static	int		get_bits( void );
		static 			Fixed 	&	min(Fixed &a, Fixed &b);
		static const	Fixed &	min(const Fixed &a, const Fixed &b);
		static 			Fixed &	max(Fixed &a, Fixed &b);
		static const	Fixed &	max(const Fixed &a, const Fixed &b);

		Fixed( void );
		~Fixed( void );
		Fixed( const int a );
		Fixed( const float f );
		Fixed( const Fixed & fixed);
		Fixed&	operator =( const Fixed &fixed );
		Fixed&	operator++( void );
		Fixed&	operator--( void );
		Fixed 	operator--( int );
		Fixed 	operator++( int );

		Fixed	operator-( const Fixed &fixed );
		Fixed	operator+( const Fixed &fixed );
		Fixed	operator*( const Fixed &fixed );
		Fixed	operator/( const Fixed &fixed );

		bool	operator<( const Fixed &fixed ) const;
		bool	operator>( const Fixed &fixed ) const;
		bool	operator<=( const Fixed &fixed ) const;
		bool	operator>=( const Fixed &fixed ) const;
		bool	operator==( const Fixed &fixed ) const;
		bool	operator!=( const Fixed &fixed ) const;

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits(  int const raw );

	private:

		int					_fixed_points;
		static const int	_bits = 8;
};

std::ostream& operator<<( std::ostream& os, const Fixed& obj );
// std::ostream& operator++( const Fixed &obj );
#endif
