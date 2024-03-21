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

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat : public Animal
{
	public:

		Cat( void );
		// ~Cat( void );
		virtual ~Cat( void );
		Cat(const Cat &obj);
		Cat & operator=(const Cat &obj);

		void	makeSound( void ) const;
		void	think( void ) const;

	private:
		std::string	_sound;
		Brain	*_brain;

};


#endif
