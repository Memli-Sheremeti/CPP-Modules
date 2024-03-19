/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 18:02:44 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"
# define CONS 1

class IMateriaSource
{
	public:

		virtual ~IMateriaSource( void ) {}
		virtual void	learnMateria( AMateria*) = 0;
		virtual AMateria* createMateria( std::string const & type ) const = 0;
};

#endif
