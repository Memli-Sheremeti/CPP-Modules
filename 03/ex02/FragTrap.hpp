/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:28:35 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 18:43:13 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    public :

    FragTrap( void );
    FragTrap( std::string name);
    ~FragTrap( void );
    FragTrap & operator=(const FragTrap & obj);

    void    highFivesGuys( void );
};

#endif