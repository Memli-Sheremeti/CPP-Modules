/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:58:27 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_CLASS_HPP
# define Cure_CLASS_HPP

# include <iostream>
# include "ICharacter.class.hpp"
# include "AMateria.class.hpp"
# define CONS 1

class ICharacter;

class Cure : public AMateria
{
	public:

		Cure( void );
		Cure ( const Cure &obj );
		~Cure( void );
		Cure & operator=(const Cure &obj);

		AMateria*	clone( void ) const;
		void	use( ICharacter& target );
};

#endif
