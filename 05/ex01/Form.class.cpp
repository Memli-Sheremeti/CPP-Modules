/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 17:18:13 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

const char * Form::GradeTooHighException::what( void )  const throw()
{
	return ("the Grade is to high for this Form : 1 to 150!");
}

const char * Form::GradeTooLowException::what( void )  const throw()
{
	return ("the Grade is to low for this Form !");
}

void	Form::beSigned( const Bureaucrat &b)
{
	// std::cout << b << std::endl;
	// std::cout << *this << std::endl;
	if (b.getGrade() > this->_grade_to_sign)
		throw Form::GradeTooLowException();
	this->_signed = true;
	return ;
}

std::string		Form::getName( void ) const
{
	return (this->_name);
}

unsigned int	Form::getGrade_sign( void ) const
{
	return (this->_grade_to_sign);
}

unsigned int	Form::getGrade_exec( void ) const
{
	return (this->_grade_to_exec);
}

bool		Form::getSigned( void ) const
{
	return (this->_signed ? true : false);
}

Form & Form::operator=(const Form &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

Form::Form( const Form &obj ) :
_name(obj._name), _signed(obj._signed), _grade_to_sign(obj._grade_to_sign), _grade_to_exec(obj._grade_to_exec)
{
	if (CONS)
		std::cout << "Form : Copy constructor called" << std::endl;
	return ;
}

Form::Form( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec ) :
_name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	if (this->_grade_to_exec < 1 || this->_grade_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_to_exec > 150 || this->_grade_to_sign > 150)
			throw  Form::GradeTooLowException();
	if (CONS)
		std::cout << "Form : Constructor called" << std::endl;
	return ;
}

Form::Form( void ) : _name("BASIC Form"), _grade_to_sign(150), _grade_to_exec(150)
{
	if (CONS)
		std::cout << "Form : Default constructor called" << std::endl;
	return ;
}

Form::~Form( void )
{
	if (CONS)
		std::cout << "Form : Destructor called" << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << " Form can be signed by " << obj.getGrade_sign()
	<< " grade and can be executed by " << obj.getGrade_exec();
	return (os);
}
