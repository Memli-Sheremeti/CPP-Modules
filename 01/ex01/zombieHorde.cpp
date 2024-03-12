/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:05:50 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 15:20:31 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie *zombie_horde;

	zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].set_name(name);
		zombie_horde[i].annonce();
	}
	return (zombie_horde);
}
