/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:27:42 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 12:02:02 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My Diamond name is " << this->_name << " ! but ";
	std::cout << "my Clap name is " << ClapTrap::_name << " !!!!" << std::endl;

	return ;
}
void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack( target );
	return ;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &obj)
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

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_att_dmg =  FragTrap::_att_dmg;
	if (CONS)
		std::cout << "DT constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( void ) : ClapTrap()
{
	this->_name = "DEFAULT DT";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_att_dmg =  FragTrap::_att_dmg;
	if (CONS)
		std::cout << "DT default constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	if (CONS)
		std::cout << "DT destructor called" << std::endl;
	return ;
}
