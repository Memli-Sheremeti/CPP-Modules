/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:44:57 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 14:41:30 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"
#include <cstdlib>

const char * RobotomyRequestForm::NotRobotomized::what( void )  const throw()
{
	return ("ERROOOOOOOOOOR ROBOTOMIZED !");
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int x = rand() % 100;

	if (executor.getGrade() > this->getGrade_exec())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedForm());
	else
	{
		std::cout << "...*bip*...*kresh*..." << std::endl;
		if (x % 2 == 0)
			std::cout << _target << " has been robotomized !" << std::endl;
		else
			throw (RobotomyRequestForm::NotRobotomized());
	}
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	(void) obj;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj ) :
_target(obj._target)
{
	if (CONS)
		std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
AForm(target, 72, 45)
{
	if (CONS)
		std::cout << "RobotomyRequestForm : Constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( void ) :
AForm("default_RRF", 72, 45), _target("default_RRF")
{
	if (CONS)
		std::cout << "RobotomyRequestForm : Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	if (CONS)
		std::cout << "RobotomyRequestForm : Destructor called" << std::endl;
	return ;
}
