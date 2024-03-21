/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 11:45:30 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << "--- Waking up\n" << std::endl;
	ClapTrap claptrap("Bishop");

	std::cout << "\n--- Attacks\n" << std::endl;
	claptrap.attack("The King");
	claptrap.attack("The Queen");

	std::cout << "\n--- Take damage and be repaired\n" << std::endl;
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	// Energy = 6

	std::cout << std::endl;
	claptrap.takeDamage(3);
	claptrap.beRepaired(1);
	// Energy = 4

	std::cout << std::endl;
	claptrap.takeDamage(1);
	claptrap.beRepaired(10);
	claptrap.attack("Tower");
	// Energy = 1

	std::cout << std::endl;
	claptrap.takeDamage(4);
	claptrap.beRepaired(10);
	claptrap.attack("King");
	// Energy = 0 --> not enought

	std::cout << "\n--- Taking a lot of damage\n" << std::endl;
	claptrap.takeDamage(10000);

	std::cout << "\n--- NO LIFE OR ENERGY \n" << std::endl;
	claptrap.attack("Knight");
	claptrap.beRepaired(100);
	return (0);
}
