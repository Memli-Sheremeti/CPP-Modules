/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:00:16 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:06:05 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:

				Zombie( void );
				~Zombie( void );
	void 		annonce( void );
	void 		set_name( std::string name );
	std::string get_name( void ) const;

	private:
	std::string	name;
};

Zombie *newZombie( std::string name );
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name);

#endif
