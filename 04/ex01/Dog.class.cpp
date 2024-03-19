/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:30:17 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 16:46:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

void	Dog::makeSound( void ) const
{
	std::cout << this->_sound << std::endl;
	return ;
}

Dog & Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

Dog::Dog(const Dog &obj)
{
	if (CONS)
		std::cout << "DOG : copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Dog::Dog( void ) : Animal("Dog"), _sound ("Woaf...WOAF...Woaf" )
{
	this->_brain = new Brain;
	if (CONS)
		std::cout << "DOG : Default constructor called" << std::endl;
	return ;
}

Dog::~Dog( void )
{
	delete _brain;
	if (CONS)
		std::cout << "DOG : Destructor called" << std::endl;
	return ;
}
