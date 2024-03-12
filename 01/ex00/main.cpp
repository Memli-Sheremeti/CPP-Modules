/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 15:03:45 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Greg;
	Zombie *Manu;

	Greg.set_name("Greg");
	Greg.annonce();
	Manu = newZombie("Manu");
	Manu->annonce();
	delete ((Zombie*) Manu);
	randomChump("Didier");
	return 0;
}
