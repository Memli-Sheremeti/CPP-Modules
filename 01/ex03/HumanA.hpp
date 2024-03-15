/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:42:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:19:45 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

 class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );

		void	 	attack( void ) const;
		std::string getName( void ) const;

	private:
		std::string _name;
		Weapon &_human_weapon;
};

#endif
