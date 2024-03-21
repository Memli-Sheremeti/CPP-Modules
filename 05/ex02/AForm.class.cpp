/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:33:16 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:33:27 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"

const char * AForm::GradeTooHighException::what( void )  const throw()
{
	return ("the Grade is to high for this AForm : 1 to 150!");
}

const char * AForm::GradeTooLowException::what( void )  const throw()
{
	return ("the Grade is to low for this AForm !");
}

void	AForm::beSigned( const Bureaucrat &b)
{
	// std::cout << b << std::endl;
	// std::cout << *this << std::endl;
	if (b.getGrade() > this->_grade_to_sign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
	return ;
}

std::string		AForm::getName( void ) const
{
	return (this->_name);
}

unsigned int	AForm::getGrade_sign( void ) const
{
	return (this->_grade_to_sign);
}

unsigned int	AForm::getGrade_exec( void ) const
{
	return (this->_grade_to_exec);
}

bool		AForm::getSigned( void ) const
{
	return (this->_signed ? true : false);
}

AForm & AForm::operator=(const AForm &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

AForm::AForm( const AForm &obj ) :
_name(obj._name), _signed(obj._signed), _grade_to_sign(obj._grade_to_sign), _grade_to_exec(obj._grade_to_exec)
{
	if (CONS)
		std::cout << "AForm : Copy constructor called" << std::endl;
	return ;
}

AForm::AForm( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec ) :
_name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	if (this->_grade_to_exec < 1 || this->_grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	else if (this->_grade_to_exec > 150 || this->_grade_to_sign > 150)
			throw  AForm::GradeTooLowException();
	if (CONS)
		std::cout << "AForm : Constructor called" << std::endl;
	return ;
}

AForm::AForm( void ) : _name("BASIC AForm"), _grade_to_sign(150), _grade_to_exec(150)
{
	if (CONS)
		std::cout << "AForm : Default constructor called" << std::endl;
	return ;
}

AForm::~AForm( void )
{
	if (CONS)
		std::cout << "AForm : Destructor called" << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << obj.getName() << " AForm can be signed by " << obj.getGrade_sign()
	<< " grade and can be executed by " << obj.getGrade_exec();
	return (os);
}
