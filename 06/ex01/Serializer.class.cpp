/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 19:10:31 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.class.hpp"
#include <cctype>
#include <cstdlib>
#include <limits>
#include <cstring>

uintptr_t	Serializer::seralize( Data* ptr )
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t> (ptr);
	return (raw);	
}

Data	*Serializer::deserialize( uintptr_t raw )
{
	Data *ptr;

	ptr = reinterpret_cast<Data*> (raw);
	return (ptr);	
}


Serializer & Serializer::operator=(const Serializer &obj)
{
	(void) obj;
	return (*this);
}

Serializer::Serializer( const Serializer &obj )
{
	(void) obj;
	if (CONS)
		std::cout << "Serializer : Copy constructor called" << std::endl;
	return ;
}

Serializer::Serializer( void )
{
	if (CONS)
		std::cout << "Serializer : Default constructor called" << std::endl;
	return ;
}

Serializer::~Serializer( void )
{
	if (CONS)
		std::cout << "ScalarConverter : Destructor called" << std::endl;
	return ;
}
