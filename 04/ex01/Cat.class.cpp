/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:30:17 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 15:53:28 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

void	Cat::makeSound( void ) const
{
	std::cout << this->_sound << std::endl;
	return ;
}

Cat & Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cat::Cat(const Cat &obj)
{
	if (CONS)
		std::cout << "CAT : copy constructor called" << std::endl;
	*this = obj;
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
