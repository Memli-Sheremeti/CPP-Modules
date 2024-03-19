/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 18:39:49 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"
# include "IMateriaSource.class.hpp"
# define CONS 1

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( const MateriaSource &obj );
		MateriaSource& operator=( const MateriaSource &obj );

		void		learnMateria( AMateria *m );
		AMateria*	createMateria( std::string const & type ) const;

	private :
		AMateria *_inventory[4];
};

#endif
