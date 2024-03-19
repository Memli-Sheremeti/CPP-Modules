/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:28:35 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 13:52:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    public :

    DiamondTrap( void );
    DiamondTrap( std::string name);
    ~DiamondTrap( void );
    DiamondTrap & operator=(const DiamondTrap & obj);

    void    whoAmI( void );
	void  attack( const std::string &target );

    private :

    std::string _name;
};

#endif
