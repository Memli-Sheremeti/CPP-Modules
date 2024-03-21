/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 17:18:13 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

const char * Bureaucrat::GradeTooHighException::what( void )  const throw()
{
	return ("The Grade is to high for this Bureaucrat : 1 to 150!");
}

const char * Bureaucrat::GradeTooLowException::what( void )  const throw()
{
	return ("The Grade is to low for this Bureaucrat : 1 to 150!");
}

void	Bureaucrat::upGrade( void )
{
	if (this->_grade < 2)
		throw  Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
	return ;
}

void	Bureaucrat::downGrade( void )
{
	if (this->_grade > 149)
			throw  Bureaucrat::GradeTooLowException();
	this->_grade += 1;
	return ;
}

std::string		Bureaucrat::getName( void ) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		this->_grade = obj._grade;
	return (*this);
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) : _name(obj._name), _grade(obj._grade)
{
	if (CONS)
		std::cout << "Bureaucrat : Copy constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
			throw  Bureaucrat::GradeTooLowException();
	if (CONS)
		std::cout << "Bureaucrat : Constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( void ) : _name("BASIC Bureaucrat"), _grade(150)
{
	if (CONS)
		std::cout << "Bureaucrat : Default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	if (CONS)
		std::cout << "Bureaucrat : Destructor called" << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}
