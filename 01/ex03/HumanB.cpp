/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:46:18 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 17:32:45 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::getName( void )
{
	return (this->_name);
}

void	HumanB::attack( void )
{
	if (this->_human_weapon)
		std::cout << getName() << " attacks with their " <<
		this->_human_weapon->getType() << std::endl;
	else
		std::cout << getName() << " can't attack, give him a weapon !"
		<< std::endl;
	return ;
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->_human_weapon = &weapon;
	return ;
}

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_human_weapon = NULL;
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}
