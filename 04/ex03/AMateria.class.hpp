/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 19:29:50 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_CLASS_HPP
# define AMateria_CLASS_HPP

# include <iostream>
# include "ICharacter.class.hpp"
# define CONS 1

class ICharacter;

class AMateria
{
	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria ( const AMateria &obj );
		virtual ~AMateria( void );
		AMateria & operator=(const AMateria &obj);

		std::string const & getType( void ) const;
		virtual AMateria*	clone( void ) const = 0;
		virtual void	use( ICharacter& target );

	protected:

		std::string		_type;

};

#endif
