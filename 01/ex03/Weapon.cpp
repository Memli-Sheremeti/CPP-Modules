/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:46:18 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:15:46 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType( std::string Type )
{
	this->_type = Type;
	return ;
}

const std::string	Weapon::getType( void ) const
{
	return (this->_type);
}

Weapon::Weapon( std::string Type ) : _type(Type)
{
	// this->setType(Type);
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}
