/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 16:14:03 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain & Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::Brain( const Brain &obj )
{
	if (CONS)
		std::cout << "Brain Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Brain::Brain( void )
{
	if (CONS)
		std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

Brain::~Brain( void )
{
	if (CONS)
		std::cout << "Brain Destructor called" << std::endl;
	return ;
}
