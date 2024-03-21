/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:41:35 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

void	Cure::use( ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

AMateria*	Cure::clone( void ) const
{
	AMateria *res;

	res = new Cure();
	return (res);
}

Cure & Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cure::Cure( const Cure &obj ) : AMateria( obj._type )
{
	if (CONS)
		std::cout << "Cure : Copy constructor called" << std::endl;
	return ;
}

Cure::Cure( void ) : AMateria("cure")
{
	if (CONS)
		std::cout << "Cure : Default constructor called" << std::endl;
	return ;
}

Cure::~Cure( void )
{
	if (CONS)
		std::cout << "Cure : Destructor called" << std::endl;
	return ;
}
