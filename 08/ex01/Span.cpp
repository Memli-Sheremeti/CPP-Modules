/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:06:52 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 13:35:29 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n ) : _size(n)
{
	return ;
}

Span::Span(void) : _size(0)
{
	return ;
}
Span::~Span ( void )
{
	return ;
}

Span::Span( Span const & obj )
{
	this->_size = obj._size;
	std::copy( obj._number.begin(), obj._number.end(), this->_number.begin());
	return ;
}

Span & Span::operator=( Span const & obj )
{
	if (this != &obj)
	{
		this->_number.erase(this->_number.begin(), this->_number.end());
		this->_size = obj._size;
		std::copy( obj._number.begin(), obj._number.end(), this->_number.begin());
	}
	return (*this);
}

void	Span::addNumber( unsigned int n )
{
	if (this->_number.size() < this->_size)
		this->_number.push_back(n);
	return ;
}

unsigned int Span::shortestSpan( void )
{
	if (_size < 2)
		throw (std::logic_error("ERROR"));

	std::sort( _number.begin(), _number.end());

	unsigned int _diff = std::numeric_limits<unsigned int>::max();
	std::vector<unsigned int>::iterator it = _number.begin();
	while (it != _number.end())
	{
		if (*it + 1 == _number.end())
			break ;
		if ((*it - ))
	}
	return (0);
}

unsigned int Span::longestSpan( void )
{
	if (_size < 2)
		throw (std::logic_error("ERROR"));

	return (*std::max_element(_number.begin(), _number.end()) - *std::min_element(_number.begin(), _number.end()));
}
