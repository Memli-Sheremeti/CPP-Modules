/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:14:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "*WrongAnimal sound*" << std::endl;
	return ;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj )
{
	if (CONS)
		std::cout << "Wrong A Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	if (CONS)
		std::cout << "Wrong A Constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( void ) : _type("BASIC WrongAnimal")
{
	if (CONS)
		std::cout << "Wrong A Default constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	if (CONS)
		std::cout << "Wrong A Destructor called" << std::endl;
	return ;
}
