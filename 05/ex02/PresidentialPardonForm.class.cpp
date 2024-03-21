/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:37:53 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:39:58 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

// const char * PresidentialPardonForm::GradeTooHighException::what( void )  const throw()
// {
// 	return ("the Grade is to high for this PresidentialPardonForm : 1 to 150!");
// }

// const char * PresidentialPardonForm::GradeTooLowException::what( void )  const throw()
// {
// 	return ("the Grade is to low for this PresidentialPardonForm !");
// }

// void	PresidentialPardonForm::beSigned( const Bureaucrat &b)
// {
// 	// std::cout << b << std::endl;
// 	// std::cout << *this << std::endl;
// 	if (b.getGrade() > this->_grade_to_sign)
// 		throw PresidentialPardonForm::GradeTooLowException();
// 	this->_signed = true;
// 	return ;
// }

// std::string		PresidentialPardonForm::getName( void ) const
// {
// 	return (this->_name);
// }

// unsigned int	PresidentialPardonForm::getGrade_sign( void ) const
// {
// 	return (this->_grade_to_sign);
// }

// unsigned int	PresidentialPardonForm::getGrade_exec( void ) const
// {
// 	return (this->_grade_to_exec);
// }

// bool		PresidentialPardonForm::getSigned( void ) const
// {
// 	return (this->_signed ? true : false);
// }

// PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
// {
// 	if (this != &obj)
// 		this->_signed = obj._signed;
// 	return (*this);
// }

// PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj ) :
// // _name(obj._name), _signed(obj._signed), _grade_to_sign(obj._grade_to_sign), _grade_to_exec(obj._grade_to_exec)
// {
// 	if (CONS)
// 		std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
// 	return ;
// }

// PresidentialPardonForm::PresidentialPardonForm( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec ) :
// _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
// {
// 	if (this->_grade_to_exec < 1 || this->_grade_to_sign < 1)
// 		throw PresidentialPardonForm::GradeTooHighException();
// 	else if (this->_grade_to_exec > 150 || this->_grade_to_sign > 150)
// 			throw  PresidentialPardonForm::GradeTooLowException();
// 	if (CONS)
// 		std::cout << "PresidentialPardonForm : Constructor called" << std::endl;
// 	return ;
// }

// PresidentialPardonForm::PresidentialPardonForm( void ) : _name("BASIC PresidentialPardonForm"), _grade_to_sign(150), _grade_to_exec(150)
// {
// 	if (CONS)
// 		std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
// 	return ;
// }

// PresidentialPardonForm::~PresidentialPardonForm( void )
// {
// 	if (CONS)
// 		std::cout << "PresidentialPardonForm : Destructor called" << std::endl;
// 	return ;
// }

// std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& obj)
// {
// 	os << obj.getName() << " PresidentialPardonForm can be signed by " << obj.getGrade_sign()
// 	<< " grade and can be executed by " << obj.getGrade_exec();
// 	return (os);
// }
