/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 14:46:18 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICharacter_CLASS_HPP
# define ICharacter_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"


class AMateria;

class ICharacter
{
	public:

		virtual ~ICharacter( void ) {}
		virtual std::string const & getName( void ) const = 0;
		virtual void	equip( AMateria *m ) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use( int idx, ICharacter& target ) = 0;
};

#endif
