/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:41:35 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

void	Character::unequip( int idx )
{
	if (this->_inventory[idx])
		_inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	if (!this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
	return ;
}

void	Character::equip( AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	return ;
}

std::string const & Character::getName( void ) const
{
	return (this->_name);
}

Character& Character::operator=(const Character & obj )
{
	if (this != &obj)
	{
		this->_name = obj._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = obj._inventory[i];
	}
	return (*this);
}

Character::Character( const Character & obj )
{
	if (CONS)
		std::cout << "Character : Destructor called" << std::endl;
	*this = obj;
	return ;
}

Character::Character( std::string name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	if (CONS)
		std::cout << "Character : Destructor called" << std::endl;
	return ;
}


Character::Character( void ) : _name("DEFAULT")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	if (CONS)
		std::cout << "Character : Destructor called" << std::endl;
	return ;
}

Character::~Character( void )
{
	if (CONS)
		std::cout << "Character : Destructor called" << std::endl;
	return ;
}
