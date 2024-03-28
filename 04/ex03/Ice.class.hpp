/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:58:27 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include "ICharacter.class.hpp"
# include "AMateria.class.hpp"


class Ice : public AMateria
{
	public:

		Ice( void );
		virtual ~Ice( void );
		Ice ( const Ice &obj );
		Ice & operator=(const Ice &obj);

		AMateria*	clone( void ) const;
		void	use( ICharacter& target );
};

#endif
