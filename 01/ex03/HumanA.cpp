/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:46:18 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:19:49 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

std::string HumanA::getName( void ) const
{
	return (this->_name);
}

void	HumanA::attack( void ) const
{
	std::cout << getName() << " attacks with their " <<
	this->_human_weapon.getType() << std::endl;
	return ;
}

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _human_weapon(weapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}
