/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 13:10:16 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	ScavTrap::attack( const std::string& target)
{
	if (this->_energy_pts && this->_hit_pts)
	{
		std::cout << "ScavTrap "
		<< this->_name << " attacks with a magic spell " << target << ", causing "
		<< this->_att_dmg << " points of damage!" << std::endl;
		this->_energy_pts -= 1;
		return ;
	}
	else if (!this->_hit_pts)
	{
		std::cout << "ScavTrap "
		<< this->_name << " couldn't attack " << target << ", no sufficient health !" << std::endl;
		return ;
	}
	else if (!this->_energy_pts)
	{
		std::cout << "ScavTrap "
		<< this->_name << " couldn't attack " << target << ", no sufficient energy !" << std::endl;
		return ;
	}
}

void	ScavTrap::guardGate( void )
{
	std::cout << "MODE GUARDGATE " << this->_name << " ACTIVATE" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &obj)
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

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_name = name;
	this->_hit_pts = 100;
	this->_att_dmg = 20;
	this->_energy_pts = 50;
	if (CONS)
		std::cout << "ST constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_name = "DEFAULT ST";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_att_dmg = 20;
	if (CONS)
		std::cout << "ST default constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	if (CONS)
		std::cout << "ST destructor called" << std::endl;
	return ;
}
