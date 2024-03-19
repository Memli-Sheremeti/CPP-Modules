/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:57:19 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 13:28:03 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public :

    ScavTrap( void );
    ScavTrap( std::string name);
    ~ScavTrap( void );
    ScavTrap &  operator=( const ScavTrap &obj );

    void  guardGate( void );
    void  attack( const std::string &target );

};
#endif
