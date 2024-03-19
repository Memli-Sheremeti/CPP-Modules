/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 15:36:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>
# define CONS 1

class WrongAnimal
{
	public:

		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal ( const WrongAnimal &obj );
		~WrongAnimal( void );
		WrongAnimal & operator=(const WrongAnimal &obj);

		std::string		getType( void ) const;
		void			makeSound( void ) const;

	protected:

		std::string		_type;

};

#endif
