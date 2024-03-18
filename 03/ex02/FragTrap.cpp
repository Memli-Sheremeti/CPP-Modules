/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:27:42 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 18:43:37 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"


void	FragTrap::highFivesGuys( void )
{
	std::cout << "High Five from " << this->_name << " !!!!" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(const FragTrap &obj)
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

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hit_pts = 100;
	this->_att_dmg = 30;
	this->_energy_pts = 100;
	if (CONS)
		std::cout << "FragTrap Constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_att_dmg = 30;
	if (CONS)
		std::cout << "FragTrap:: constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	if (CONS)
		std::cout << "Destructor called" << std::endl;
	return ;
}
