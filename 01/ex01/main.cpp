/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 15:19:54 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Greg;
	Zombie *Manu;
	Zombie *tab;

	Greg.set_name("Greg");
	Greg.annonce();
	Manu = newZombie("Manu");
	Manu->annonce();
	delete ((Zombie*) Manu);
	randomChump("Didier");

	tab = zombieHorde(3, "HUGO");
	delete [] ((Zombie*) tab);
	return 0;
}
