/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:06:52 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 12:41:22 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span( unsigned int n )
{
	this->_number.resize(n);
	return ;
}

Span::Span(void)
{
	return ;
}
Span::~Span ( void )
{
	return ;
}

Span::Span( Span const & obj )
{
	this->_number.resize(obj._number.size());
	std::copy( obj._number.begin(), obj._number.end(), this->_number.begin());
	return ;
}

Span & Span::operator=( Span const & obj )
{
	if (this != &obj)
	{
		this->_number.erase(this->_number.begin(), this->_number.end());
		this->_number.resize(obj._number.size());
		std::copy( obj._number.begin(), obj._number.end(), this->_number.begin());
	}
	return (*this);
}

void	Span::addNumber( unsigned int n )
{
	this->_number.push_back(n);
	return ;
}

unsigned int Span::shortestSpan( void )
{
	std::vector<unsigned int>::iterator it;
	unsigned int x;

	it = this->_number.begin();
	x = *it;
	while (it != this->_number.end())
	{
		std::cout << *it << std::endl;
		if (*it <= x)
			x = *it;
		it++;
	}
	return (x);
}

unsigned int Span::longestSpan( void )
{
	std::vector<unsigned int>::iterator it;
	unsigned int x = 0;

	it = this->_number.begin();
	while (it != this->_number.end())
	{
		if (*it >= x)
			x = *it;
		it++;
	}
	return (x);
}
