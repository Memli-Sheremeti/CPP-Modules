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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() > this->getGrade_exec())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedForm());
	else
	{
		std::ofstream out(_target.apppend("_shrubbery").c_str());
		for (int i = 0; i < 3; i++)
		{
			out <<
			   "                                            ." << "\n"
			<< "                                    .         ;  " << "\n"
			<< "       .              .              ;%     ;;   " << "\n"
			<< "         ,           ,                :;%  %;   " << "\n"
			<< "          :         ;                   :;%;'     .,   " << "\n"
			<< " ,.        %;     %;            ;        %;'    ,;" << "\n"
			<< "   ;       ;%;  %%;        ,     %;    ;%;    ,%'" << "\n"
			<< "    %;       %;%;      ,  ;       %;  ;%;   ,%;' " << "\n"
			<< "     ;%;      %;        ;%;        % ;%;  ,%;'" << "\n"
			<< "      `%;.     ;%;     %;'         `;%%;.%;'" << "\n"
			<< "       `:;%.    ;%%. %@;        %; ;@%;%'" << "\n"
			<< "          `:%;.  :;bd%;          %;@%;'" << "\n"
			<< "            `@%:.  :;%.         ;@@%;'   " << "\n"
			<< "              `@%.  `;@%.      ;@@%;         " << "\n"
			<< "                `@%%. `@%%    ;@@%;        " << "\n"
			<< "                  ;@%. :@%%  %@@%;       " << "\n"
			<< "                    %@bd%%%bd%%:;     " << "\n"
			<< "                      #@%%%%%:;;" << "\n"
			<< "                      %@@%%%::;" << "\n"
			<< "                      %@@@%(o);  . '         " << "\n"
			<< "                      %@@@o%;:(.,'         " << "\n"
			<< "                  `.. %@@@o%::;         " << "\n"
			<< "                     `)@@@o%::;         " << "\n"
			<< "                      %@@(o)::;        " << "\n"
			<< "                     .%@@@@%::;         " << "\n"
			<< "                     ;%@@@@%::;.          " << "\n"
			<< "                    ;%@@@@%%:;;;. " << "\n"
			<< "                ...;%@@@@@%%:;;;;,..   " << std::endl
			<< std::endl;
		}
	}
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj ) : _target(obj._target)
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string & target) :
AForm(target + "_shrubbery", 145, 137), _target( target._target )
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

