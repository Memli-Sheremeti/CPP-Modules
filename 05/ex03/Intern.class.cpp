/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 15:41:25 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

const char * Intern::NotaForm::what( void ) const throw()
{
	return ("This form doesnt exit :\nrobotomy request, presidential pardon, shrubbery creation!");
}

AForm * Intern::PresidentialPardonForm_creation( std::string target ) const
{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::RobotomyRequestForm_creation( std::string target ) const
{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::ShrubberyCreationForm_creation( std::string target ) const
{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::makeForm(std::string name_form, std::string target_form)
{
	AForm *(Intern::*const fcnt[3]) (std::string) const =
	{
		(&Intern::RobotomyRequestForm_creation),
		(&Intern::PresidentialPardonForm_creation),
		(&Intern::ShrubberyCreationForm_creation),
	};

	std::string MSG[3] =
	{
		"robotomy request",
		"presidential pardon",
		"shrubbery creation",
	};

	for (int i = 0; i < 3; i++)
	{
		if (MSG[i] == name_form)
			return ((this->*fcnt[i]) (target_form));
	}
	throw(Intern::NotaForm());
	return (NULL);
}

Intern & Intern::operator=(const Intern &obj)
{
	(void) obj;
	return (*this);
}

Intern::Intern( const Intern &obj )
{
	(void) obj;
	if (CONS)
		std::cout << "Intern : Copy constructor called" << std::endl;
	return ;
}

Intern::Intern( void )
{
	if (CONS)
		std::cout << "Intern : Default constructor called" << std::endl;
	return ;
}

Intern::~Intern( void )
{
	if (CONS)
		std::cout << "Intern : Destructor called" << std::endl;
	return ;
}
