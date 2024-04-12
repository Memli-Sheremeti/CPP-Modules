/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 13:38:34 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << "--- Waking up\n" << std::endl;
	// ClapTrap claptrap("Bishop");
	// ScavTrap scavtrap("PAWNS");
	// FragTrap fragtrap("Knight");
	DiamondTrap diamondtrap("777");



	std::cout << "\n--- Attacks\n" << std::endl;
	// claptrap.attack("The King");
	// claptrap.attack("The Queen");
	// scavtrap.attack("The King");
	// scavtrap.attack("The Queen");
	// fragtrap.attack("The King");
	// fragtrap.attack("The Queen");
	diamondtrap.attack("The King");
	diamondtrap.attack("The Queen");

	std::cout << "\n--- Take damage and be repaired\n" << std::endl;
	// claptrap.takeDamage(2);
	// claptrap.beRepaired(2);
	// scavtrap.takeDamage(2);
	// scavtrap.beRepaired(2);
	// fragtrap.takeDamage(2);
	// fragtrap.beRepaired(2);
	diamondtrap.takeDamage(2);
	diamondtrap.beRepaired(2);
	// Energy = 6

	std::cout << std::endl;
	// claptrap.takeDamage(3);
	// claptrap.beRepaired(1);
	// scavtrap.takeDamage(3);
	// scavtrap.beRepaired(1);
	// fragtrap.takeDamage(3);
	// fragtrap.beRepaired(1);
	diamondtrap.takeDamage(3);
	diamondtrap.beRepaired(1);

	// Energy = 4

	std::cout << std::endl;
	// claptrap.takeDamage(1);
	// claptrap.beRepaired(10);
	// claptrap.attack("Tower");
	// scavtrap.takeDamage(1);
	// scavtrap.beRepaired(10);
	// scavtrap.attack("Tower");
	// fragtrap.takeDamage(1);
	// fragtrap.beRepaired(10);
	// fragtrap.attack("Tower");
	diamondtrap.takeDamage(1);
	diamondtrap.beRepaired(10);
	diamondtrap.attack("555");

	// Energy = 1

	std::cout << std::endl;
	// claptrap.takeDamage(4);
	// claptrap.beRepaired(10);
	// claptrap.attack("King");
	// scavtrap.takeDamage(4);
	// scavtrap.beRepaired(10);
	// scavtrap.attack("King");
	// fragtrap.takeDamage(4);
	// fragtrap.beRepaired(10);
	// fragtrap.attack("King");
	diamondtrap.takeDamage(4);
	diamondtrap.beRepaired(10);
	diamondtrap.attack("King");

	// Energy = 0 --> not enought
	std::cout << "\n--- Special Spell \n" << std::endl;
	// scavtrap.guardGate();
	// fragtrap.highFivesGuys();
	diamondtrap.whoAmI();


	std::cout << "\n--- Taking a lot of damage\n" << std::endl;
	// claptrap.takeDamage(10000);
	// scavtrap.takeDamage(10000);
	// fragtrap.takeDamage(10000);
	diamondtrap.takeDamage(10000);


	std::cout << "\n--- NO LIFE OR ENERGY \n" << std::endl;
	// claptrap.attack("Knight");
	// claptrap.beRepaired(100);
	// scavtrap.attack("Knight");
	// scavtrap.beRepaired(100);
	// fragtrap.attack("Knight");
	// fragtrap.beRepaired(100);
	diamondtrap.attack("Knight");
	diamondtrap.beRepaired(100);


	return (0);
}
