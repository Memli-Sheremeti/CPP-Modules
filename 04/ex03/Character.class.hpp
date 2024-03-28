/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 14:46:07 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"
# include "ICharacter.class.hpp"

class Character : public ICharacter
{
	public:

		Character( void );
		virtual ~Character( void );
		Character( std::string name );
		Character( const Character &obj );
		Character& operator=( const Character &obj );

		std::string const & getName( void ) const;
		void	equip( AMateria *m );
		void	unequip( int idx );
		void	use( int idx, ICharacter& target );

	private :
		std::string	_name;
		AMateria *_inventory[4];
};

#endif
