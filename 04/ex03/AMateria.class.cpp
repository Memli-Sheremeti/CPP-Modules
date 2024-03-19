/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:41:35 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

void	AMateria::use( ICharacter & target)
{
	(void) target;
	return ;
}

AMateria*	AMateria::clone( void ) const
{
	AMateria *res;

	res = NULL;
	return (res);
}

std::string const & AMateria::getType( void ) const
{
	return (this->_type);
}

AMateria & AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AMateria::AMateria( const AMateria &obj )
{
	if (CONS)
		std::cout << "AMateria : Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

AMateria::AMateria( const std::string & type ) : _type(type)
{
	if (CONS)
		std::cout << "AMateria : Constructor called" << std::endl;
	return ;
}

AMateria::AMateria( void ) : _type("BASIC AMateria")
{
	if (CONS)
		std::cout << "AMateria : Default constructor called" << std::endl;
	return ;
}

AMateria::~AMateria( void )
{
	if (CONS)
		std::cout << "AMateria : Destructor called" << std::endl;
	return ;
}
