/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:04:13 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::annonce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

std::string Zombie::get_name( void ) const
{
	return (this->name);
}

void Zombie::set_name( std::string name )
{
	this->name = name;
	return ;
}

Zombie::Zombie(void)
{
	std::cout << "CONSTRUCTOR  ZOMBIE" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "DESTRUCTOR " << this->name << " ZOMBIE" << std::endl;
	return ;
}
