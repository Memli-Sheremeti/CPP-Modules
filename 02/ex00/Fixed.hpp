/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:58:30 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

		static	int	getBits( void );

		Fixed( void );
		Fixed( const Fixed &fixed );
		~Fixed( void );
		Fixed & operator =(const Fixed &fixed);

		int		getRawBits( void ) const;
		void	setRawBits(  int const raw );

	private:

		int					_fixed_points;
		static const int	_bits = 8;
};


#endif
