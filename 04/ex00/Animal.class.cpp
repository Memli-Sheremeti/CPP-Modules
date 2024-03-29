/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 13:41:29 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

void	Animal::makeSound( void ) const
{
	std::cout << "*animal sound*" << std::endl;
	return ;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

Animal & Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Animal::Animal( const Animal &obj ) : _type(obj._type)
{
	if (CONS)
		std::cout << "Animal : Copy constructor called" << std::endl;
	return ;
}

Animal::Animal( std::string type ) : _type(type)
{
	if (CONS)
		std::cout << "Animal : Constructor called" << std::endl;
	return ;
}

Animal::Animal( void ) : _type("BASIC ANIMAL")
{
	if (CONS)
		std::cout << "Animal : Default constructor called" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	if (CONS)
		std::cout << "Animal : Destructor called" << std::endl;
	return ;
}
