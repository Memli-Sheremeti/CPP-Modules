/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/05 15:56:49 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"
#include <ctime>
#include <iomanip>

Base::Base( void )
{
	return ;
}

Base::~Base( void )
{
	if (CONS)
		std::cout << "Base : Destructor called" << std::endl;
	return ;
}

const char * Base::BaseWrong::what() const throw()
{
	return ("BASE : Error");
}