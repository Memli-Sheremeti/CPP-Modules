/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:41:35 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"


void	MateriaSource::learnMateria(AMateria*	m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
	return ;
}

AMateria* MateriaSource::createMateria( std::string const & type ) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type )
			return (this->_inventory[i]->clone());
	}
	return (NULL);
}

MateriaSource& MateriaSource::operator=(const MateriaSource & obj )
{
	if (this != &obj)
	{
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

MateriaSource::MateriaSource( const MateriaSource & obj )
{
	if (CONS)
		std::cout << "MateriaSource : Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
	return ;
}

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	if (CONS)
		std::cout << "MateriaSource : Constructor called" << std::endl;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	if (CONS)
		std::cout << "MateriaSource : Destructor called" << std::endl;
	return ;
}
