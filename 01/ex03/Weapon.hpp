/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:42:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 16:00:12 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

 class Weapon
{
	public:
		Weapon( std::string Type );
		~Weapon( void );
		std::string	getType( void );
		void 		setType(std::string Type );


	private:
		std::string _type;
};



#endif
