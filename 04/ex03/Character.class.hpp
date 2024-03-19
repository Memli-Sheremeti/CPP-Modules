/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 18:39:49 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"
# include "ICharacter.class.hpp"
# define CONS 1

class Character : public ICharacter
{
	public:

		Character( void );
		Character( std::string name );
		~Character( void );
		Character( const Character &obj );
		Character& operator=( const Character &obj );

		std::string const & getName( void ) const;
		void	equip( AMateria *m );
		void	unequip(int idx);
		void	use( int idx, ICharacter& target );

	private :
		std::string	_name;
		AMateria *_inventory[4];
};

#endif
