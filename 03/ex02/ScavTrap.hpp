/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:57:19 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 18:15:09 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public :

    ScavTrap( void );
    ScavTrap( std::string name);
    ~ScavTrap( void );
    ScavTrap &  operator=( const ScavTrap &obj );

    void  guardGate( void );
    void  attack( const std::string &target );

  private :

    bool  _guard;
};
#endif