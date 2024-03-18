/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:27:42 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 19:06:07 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI( void )
{
	std::cout << "High Five from " << this->_name << " !!!!" << std::endl;
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

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_trap")
{
	this->_hit_pts = FragTrap::_hit_pts;
	this->_att_dmg =  FragTrap::_hit_pts; ;
	this->_energy_pts = FragTrap::_hit_pts;;
	if (CONS)
		std::cout << "DiamondTrap Constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( void ) : ClapTrap("DT_clap_trap")
{
	this->_name = "DT_DEFAULLT";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_att_dmg = 30;
	if (CONS)
		std::cout << "DiamondTrap:: constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	if (CONS)
		std::cout << "Destructor called" << std::endl;
	return ;
}
