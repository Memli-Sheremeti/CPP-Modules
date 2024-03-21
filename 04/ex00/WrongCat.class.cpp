/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:16:04 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 13:36:27 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

void	WrongCat::makeSound( void ) const
{
	std::cout << this->_sound << std::endl;
	return ;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_sound = obj._sound;
	}
	return (*this);
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj._type), _sound(obj._sound)
{
	if (CONS)
		std::cout << "WRONG CAT : Copy constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat"), _sound("Miaou !" )
{
	if (CONS)
		std::cout << "WRONG CAT : Default constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat( void )
{
	if (CONS)
		std::cout << "WRONG CAT : Destructor called" << std::endl;
	return ;
}
