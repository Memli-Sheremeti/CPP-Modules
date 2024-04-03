/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:37:53 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 14:35:30 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

void	PresidentialPardonForm::execute( Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGrade_exec())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedForm());
	std::cout << _target << " has been parddoned by Zaphod Beeblebrox !" << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	(void) obj;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj ) :
_target(obj._target)
{
	if (CONS)
		std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target) :
AForm(target, 25, 5), _target(target)
{
	if (CONS)
		std::cout << "PresidentialPardonForm : Constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( void ) :
AForm("default_PPF", 25, 5), _target("default_PPF")
{
	if (CONS)
		std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	if (CONS)
		std::cout << "PresidentialPardonForm : Destructor called" << std::endl;
	return ;
}
