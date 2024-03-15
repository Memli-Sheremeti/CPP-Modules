/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/15 15:56:37 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack( const std::string& target)
{
	if (this->_energy_pts && this->_hit_pts)
	{
		std::cout << "ClapTrap "
		<< this->_name << " attacks " << target << ", causing "
		<< this->_att_dmg << " points of damage!" << std::endl;

		// REDUIRE SON ENERGY !
	}
	return ;
}

void	ClapTrap::takeDamage( unsigned int amout )
{
	std::cout << "ClapTrap "
	<< this->_name << " attacks " << amout << ", causing "
	<< this->_att_dmg << " points of damage!" << std::endl;
	return ;
}
void	ClapTrap::beRepaired( unsigned int amout )
{
	return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &obj)
{
	if (CONS)
		std::cout << "Copy constructor called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_pts = this->_hit_pts;
		this->_energy_pts = this->_energy_pts;
		this->_att_dmg = this->_att_dmg;
	}
	return (*this);
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_pts(10), _energy_pts(10), _att_dmg(0)
{
	return ;
}

ClapTrap::ClapTrap( void ) : _name("DEFAULT"), _hit_pts(10), _energy_pts(10), _att_dmg(0)
{
	if (CONS)
		std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	if (CONS)
		std::cout << "Destructor called" << std::endl;
	return ;
}
