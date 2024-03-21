/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 13:56:59 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

void	Brain::getIdea( void ) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}

void	Brain::setIdea( std::string idea )
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}


Brain & Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		*this->_ideas = *obj._ideas;
	}
	return (*this);
}

Brain::Brain( const Brain &obj )
{
	*this->_ideas = *obj._ideas;
	if (CONS)
		std::cout << "Brain Copy constructor called" << std::endl;
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
