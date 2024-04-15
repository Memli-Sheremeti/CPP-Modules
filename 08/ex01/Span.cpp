/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:06:52 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 14:42:39 by mshereme         ###   ########.fr       */
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
	else
		throw(std::logic_error("ERROR"));
	return ;
}

void	Span::addRandomNum( unsigned int limit )
{
	for (unsigned int i = 0; i < _size; i++)
		this->_number.push_back(rand() % limit);
	return ;
}

unsigned int Span::shortestSpan( void )
{
	std::vector<unsigned int> _diff(_size);
	std::vector<unsigned int> _sorted;

	if (_size < 2)
		throw (std::logic_error("ERROR"));

	_sorted = this->_number;
	std::sort(_sorted.begin(), _sorted.end());
	std::adjacent_difference(_sorted.begin(), _sorted.end(), _diff.begin());
	return (*std::min_element(_diff.begin(), _diff.end()));
}

unsigned int Span::longestSpan( void )
{
	if (_size < 2)
		throw (std::logic_error("ERROR"));
	return (*std::max_element(_number.begin(), _number.end()) - *std::min_element(_number.begin(), _number.end()));
}
