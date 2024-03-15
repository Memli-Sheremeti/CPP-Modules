/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/15 15:50:58 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define CONS 0

class ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap & operator=(const ClapTrap &obj);

		void	attack( const std::string &target);
		void	takeDamage( unsigned int amout );
		void	beRepaired( unsigned int amout );
	private:

		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_energy_pts;
		unsigned int	_att_dmg;
};


#endif
