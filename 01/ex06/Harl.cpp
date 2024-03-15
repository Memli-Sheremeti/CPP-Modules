/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:38:00 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug( void ) const
{
	std::cout <<
	"I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
	<< std::endl;
}

void	Harl::info( void ) const
{
	std::cout <<
	"I cannot believe adding extra bacon costs more money.\nYou didn't put"
	<< "enough bacon in my burger!\nIf you did, I wouldn't be asking for more!"
	<< std::endl;
}

void	Harl::waring( void ) const
{
	std::cout <<
	"I think I deserve to have some extra bacon for free.\nI've been coming for"
	<< " years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error( void ) const
{
	std::cout <<
	"This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain( std::string level ) const
{
	void	(Harl::*const fct_nb[4]) ( void ) const =
	{ (&Harl::debug), (&Harl::info), (&Harl::waring), (&Harl::error), };

	std::string		MSG[4] = { "DEBUG", "INFO", "WARNING", "ERROR",};
	for (int i = 0; i < 4; i++)
	{
		if (MSG[i] == level)
		{
			switch(i)
			{
				case 0:
					std::cout << "[ "<< MSG[0] << " ]" << std::endl;
					(this->*fct_nb[0]) ();
					std::cout << std::endl;

				case 1:
					std::cout << "[ "<< MSG[1] << " ]" << std::endl;
					(this->*fct_nb[1]) ();
					std::cout << std::endl;
				case 2:
					std::cout << "[ "<< MSG[2] << " ]" << std::endl;
					(this->*fct_nb[2]) ();
					std::cout << std::endl;
				case 3:
					std::cout << "[ "<< MSG[3] << " ]" << std::endl;
					(this->*fct_nb[3]) ();
					std::cout << std::endl;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}

Harl::Harl(void)
{
	std::cout << "CONSTRUCTOR  Harl" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "DESTRUCTOR Harl" << std::endl;
	return ;
}
