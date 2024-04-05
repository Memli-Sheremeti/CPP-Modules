/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/05 16:49:30 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.class.hpp"

A & A::operator=(const A &obj)
{
	(void) obj;
	return (*this);
}

A::A( const A &obj )
{
	(void) obj;
	if (CONS)
		std::cout << "A : Copy constructor called" << std::endl;
	return ;
}

A::A( void )
{
	if (CONS)
		std::cout << "A : Default constructor called" << std::endl;
	return ;
}

A::~A( void )
{
	if (CONS)
		std::cout << "A : Destructor called" << std::endl;
	return ;
}
