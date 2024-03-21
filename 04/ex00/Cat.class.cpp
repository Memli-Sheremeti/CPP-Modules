/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:30:17 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 13:38:44 by mshereme         ###   ########.fr       */
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
	{
		this->_type = obj._type;
		this->_sound = obj._sound;
	}
	return (*this);
}

Cat::Cat(const Cat &obj) : Animal(obj._type), _sound(obj._sound)
{
	if (CONS)
		std::cout << "CAT : Copy constructor called" << std::endl;
	return ;
}

Cat::Cat( void ) : Animal("Cat"), _sound("Miaou !")
{
	if (CONS)
		std::cout << "CAT : Default constructor called" << std::endl;
	return ;
}

Cat::~Cat( void )
{
	if (CONS)
		std::cout << "CAT : Destructor called" << std::endl;
	return ;
}
