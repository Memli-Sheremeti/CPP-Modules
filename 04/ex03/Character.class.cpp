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
	if (idx < 0 || idx > 3)
		return ;
	else if (this->_inventory[idx])
	{
		// delete _inventory[idx];
		_inventory[idx] = 0;
	}
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	return ;
}

void	Character::equip( AMateria *m)
{
	if (!m)
		return ;
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
		this->_name = obj._name + ".copy";
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (obj._inventory[i])
				this->_inventory[i] = obj._inventory[i]->clone();
			else
				this->_inventory[i] = 0;
		}
	}
	return (*this);
}

Character::Character( const Character & obj ) : _name( obj._name )
{
	if (CONS)
		std::cout << "Character : Copy Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
	return ;
}

Character::Character( std::string name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	if (CONS)
		std::cout << "Character : Constructor called" << std::endl;
	return ;
}


Character::Character( void ) : _name("BOT")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	if (CONS)
		std::cout << "Character : Default Constructorr called" << std::endl;
	return ;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	if (CONS)
		std::cout << "Character : Destructor called" << std::endl;
	return ;
}
