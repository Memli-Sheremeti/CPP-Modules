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

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"
# include "Brain.class.hpp"
# define CONS 1

class Dog : public Animal
{
	public:

		Dog( void );
		~Dog( void );
		// virtual ~Dog( void );
		Dog(const Dog &obj);
		Dog & operator=(const Dog &obj);

		void	makeSound( void ) const;

	private:
		std::string	_sound;
		Brain* _brain;
};

#endif
