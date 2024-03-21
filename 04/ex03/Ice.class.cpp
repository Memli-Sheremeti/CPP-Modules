/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:41:35 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

void	Ice::use( ICharacter & target)
{
	std::cout << "'* shoots an ice bolt at " << target.getName()
	<< " *'" << std::endl;
	return ;
}

AMateria*	Ice::clone( void ) const
{
	AMateria *res;

	res = new Ice(*this);
	return (res);
}

Ice & Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Ice::Ice( const Ice &obj ) : AMateria(obj._type)
{
	if (CONS)
		std::cout << "Ice : Copy constructor called" << std::endl;
	return ;
}

Ice::Ice( void ) : AMateria("ice")
{
	if (CONS)
		std::cout << "Ice : Default constructor called" << std::endl;
	return ;
}

Ice::~Ice( void )
{
	if (CONS)
		std::cout << "Ice : Destructor called" << std::endl;
	return ;
}
