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

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# define CONS 1

class Animal
{
	public:

		Animal( void );
		virtual ~Animal( void );
		Animal( std::string type );
		Animal ( const Animal &obj );
		Animal & operator=(const Animal &obj);

		std::string				getType( void ) const;
		virtual void			makeSound( void ) const;

	protected:

		std::string		_type;

};

#endif
