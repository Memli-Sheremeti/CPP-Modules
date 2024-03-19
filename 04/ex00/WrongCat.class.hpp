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

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include <iostream>
# include "WrongAnimal.class.hpp"
# define CONS 1

class WrongCat : public WrongAnimal
{
	public:

		WrongCat( void );
		~WrongCat( void );
		WrongCat(const WrongCat &obj);
		WrongCat & operator=(const WrongCat &obj);

		void	makeSound( void ) const;

	private:
		std::string	_sound;
};


#endif
