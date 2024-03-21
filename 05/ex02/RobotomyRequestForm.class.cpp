/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:44:57 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:48:38 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

// const char * RobotomyRequestForm::GradeTooHighException::what( void )  const throw()
// {
// 	return ("the Grade is to high for this RobotomyRequestForm : 1 to 150!");
// }

// const char * RobotomyRequestForm::GradeTooLowException::what( void )  const throw()
// {
// 	return ("the Grade is to low for this RobotomyRequestForm !");
// }

// void	RobotomyRequestForm::beSigned( const Bureaucrat &b)
// {
// 	// std::cout << b << std::endl;
// 	// std::cout << *this << std::endl;
// 	if (b.getGrade() > this->_grade_to_sign)
// 		throw RobotomyRequestForm::GradeTooLowException();
// 	this->_signed = true;
// 	return ;
// }

// std::string		RobotomyRequestForm::getName( void ) const
// {
// 	return (this->_name);
// }

// unsigned int	RobotomyRequestForm::getGrade_sign( void ) const
// {
// 	return (this->_grade_to_sign);
// }

// unsigned int	RobotomyRequestForm::getGrade_exec( void ) const
// {
// 	return (this->_grade_to_exec);
// }

// bool		RobotomyRequestForm::getSigned( void ) const
// {
// 	return (this->_signed ? true : false);
// }

// RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
// {
// 	if (this != &obj)
// 		this->_signed = obj._signed;
// 	return (*this);
// }

// RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj ) :
// // _name(obj._name), _signed(obj._signed), _grade_to_sign(obj._grade_to_sign), _grade_to_exec(obj._grade_to_exec)
// {
// 	if (CONS)
// 		std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
// 	return ;
// }

// RobotomyRequestForm::RobotomyRequestForm( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec ) :
// _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
// {
// 	if (this->_grade_to_exec < 1 || this->_grade_to_sign < 1)
// 		throw RobotomyRequestForm::GradeTooHighException();
// 	else if (this->_grade_to_exec > 150 || this->_grade_to_sign > 150)
// 			throw  RobotomyRequestForm::GradeTooLowException();
// 	if (CONS)
// 		std::cout << "RobotomyRequestForm : Constructor called" << std::endl;
// 	return ;
// }

// RobotomyRequestForm::RobotomyRequestForm( void ) : _name("BASIC RobotomyRequestForm"), _grade_to_sign(150), _grade_to_exec(150)
// {
// 	if (CONS)
// 		std::cout << "RobotomyRequestForm : Default constructor called" << std::endl;
// 	return ;
// }

// RobotomyRequestForm::~RobotomyRequestForm( void )
// {
// 	if (CONS)
// 		std::cout << "RobotomyRequestForm : Destructor called" << std::endl;
// 	return ;
// }

// std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& obj)
// {
// 	os << obj.getName() << " RobotomyRequestForm can be signed by " << obj.getGrade_sign()
// 	<< " grade and can be executed by " << obj.getGrade_exec();
// 	return (os);
// }
