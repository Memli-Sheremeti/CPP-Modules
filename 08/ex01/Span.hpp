/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:52:15 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 14:52:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits>
# include <cmath>
# include <numeric>

class Span
{
	private :

	std::vector<unsigned int>	_number;
	unsigned int				_size;

	public :

	Span(void);
	Span( unsigned int n );
	~Span ( void );
	Span( Span const & obj );
	Span & operator=( Span const & obj );

	void	addNumber( unsigned int n );
	unsigned int shortestSpan( void );
	unsigned int longestSpan( void );
	void	addRandomNum( unsigned int limit );
};

#endif
