/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/15 10:51:11 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

		static	int	get_bits( void );

		Fixed( void );
		Fixed( const int a );
		Fixed( const float f );
		~Fixed( void );
		Fixed & operator =(const Fixed &fixed);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits(  int const raw );

	private:

		int					_fixed_points;
		static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
