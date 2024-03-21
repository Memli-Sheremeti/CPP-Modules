/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 15:36:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"

class Brain
{
	public:

		Brain( void );
		~Brain( void );
		Brain ( const Brain &obj );
		Brain & operator=(const Brain &obj);

		void		getIdea( void ) const;
		void		setIdea( std::string idea );
		
	protected:
		std::string		_ideas[100];

};

#endif
