/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 15:41:16 by mshereme         ###   ########.fr       */
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
		this->_energy_pts -= 1;
		return ;
	}
	else if (!this->_hit_pts)
	{
		std::cout << "ClapTrap "
		<< this->_name << " couldn't attack " << target << ", no sufficient health !" << std::endl;
		return ;
	}
	else if (!this->_energy_pts)
	{
		std::cout << "ClapTrap "
		<< this->_name << " couldn't attack " << target << ", no sufficient energy !" << std::endl;
		return ;
	}
}

void	ClapTrap::takeDamage( unsigned int amout )
{
	std::cout << "ClapTrap "
	<< this->_name << " looses " << amout << " of life..." << std::endl;
	amout > this->_hit_pts ? this->_hit_pts = 0 : this->_hit_pts -= amout;
	if (!this->_hit_pts)
		std::cout << "ClapTrap "
		<< this->_name << " is dead... " << std::endl;
	return ;
}
void	ClapTrap::beRepaired( unsigned int amout )
{
	if (this->_energy_pts && this->_hit_pts)
	{
		std::cout << "ClapTrap "
		<< this->_name << " repaired itslef of " << amout << " !!!" << std::endl;
		this->_energy_pts -= 1;
		this->_hit_pts += amout;
		std::cout << "ClapTrap "
		<< this->_name << " has " << this->_hit_pts << " point of life." << std::endl;
		return ;
	}
	else if (!this->_hit_pts)
	{
		std::cout << "ClapTrap "
		<< this->_name << " couldn't repaired itself" << ", no sufficient health !" << std::endl;
		return ;
	}
	else if (!this->_energy_pts)
	{
		std::cout << "ClapTrap "
		<< this->_name << " couldn't repaired itself" << ", no sufficient energy !" << std::endl;
		return ;
	}
	return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &obj)
{
	if (CONS)
		std::cout << "Copy constructor called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_pts = obj._hit_pts;
		this->_energy_pts = obj._energy_pts;
		this->_att_dmg = obj._att_dmg;
	}
	return (*this);
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_pts(10), _energy_pts(10), _att_dmg(0)
{
	if (CONS)
		std::cout << "CT constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( void ) : _name("DEFAULT CT"), _hit_pts(10), _energy_pts(10), _att_dmg(0)
{
	if (CONS)
		std::cout << "CT default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	if (CONS)
		std::cout << "CT destructor called" << std::endl;
	return ;
}
