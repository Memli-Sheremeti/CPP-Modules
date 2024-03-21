/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:30:17 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 13:56:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

void	Cat::makeSound( void ) const
{
	std::cout << this->_sound << std::endl;
	return ;
}

void	Cat::think( void ) const
{
	this->_brain->setIdea(" Croquette ");
	this->_brain->getIdea();
}

Cat & Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		// if (this->_brain)
		// 	delete this->_brain;
		// this->_brain = new Brain(*obj._brain);
		*this->_brain = *obj._brain;
		this->_type = obj._type;
	}
	return (*this);
}

Cat::Cat( const Cat &obj ) :  Animal("Cat"), _sound(obj._sound)
{
	if (CONS)
		std::cout << "CAT : copy constructor called" << std::endl;
	this->_brain = new Brain (*obj._brain);
	return ;
}

Cat::Cat( void ) : Animal("Cat"), _sound("Miaou !" )
{
	this->_brain = new Brain;
	if (CONS)
		std::cout << "CAT : Default constructor called" << std::endl;
	return ;
}

Cat::~Cat( void )
{
	delete _brain;
	if (CONS)
		std::cout << "CAT : Destructor called" << std::endl;
	return ;
}
