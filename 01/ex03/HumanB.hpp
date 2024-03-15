/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:42:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/14 14:21:04 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

 class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB( void );

		void		setWeapon( Weapon &weapon );
		void	 	attack( void ) const;
		std::string getName( void ) const;

	private:
		std::string _name;
		Weapon	*_human_weapon;
};



#endif
