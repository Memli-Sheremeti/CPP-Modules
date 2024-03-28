/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:37:53 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/22 10:19:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

// const char * ShrubberyCreationForm::GradeTooHighException::what( void )  const throw()
// {
// 	return ("the Grade is to high for this ShrubberyCreationForm : 1 to 150!");
// }

// const char * ShrubberyCreationForm::GradeTooLowException::what( void )  const throw()
// {
// 	return ("the Grade is to low for this ShrubberyCreationForm !");
// }

// void	ShrubberyCreationForm::beSigned( const Bureaucrat &b)
// {
// 	// std::cout << b << std::endl;
// 	// std::cout << *this << std::endl;
// 	if (b.getGrade() > this->_grade_to_sign)
// 		throw ShrubberyCreationForm::GradeTooLowException();
// 	this->_signed = true;
// 	return ;
// }

// std::string		ShrubberyCreationForm::getName( void ) const
// {
// 	return (this->_name);
// }

// unsigned int	ShrubberyCreationForm::getGrade_sign( void ) const
// {
// 	return (this->_grade_to_sign);
// }

// unsigned int	ShrubberyCreationForm::getGrade_exec( void ) const
// {
// 	return (this->_grade_to_exec);
// }

// bool		ShrubberyCreationForm::getSigned( void ) const
// {
// 	return (this->_signed ? true : false);
// }

// ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
// {
// 	if (this != &obj)
// 		this->_signed = obj._signed;
// 	return (*this);
// }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj )
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string & target) :
AForm(target + "_shrubbery", 145, 137), _target( target )
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
AForm("default_shrubbery", 145, 137), _target("default")
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Destructor called" << std::endl;
	return ;
}

// std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& obj)
// {
// 	os << obj.getName() << " ShrubberyCreationForm can be signed by " << obj.getGrade_sign()
// 	<< " grade and can be executed by " << obj.getGrade_exec();
// 	return (os);
// }
