/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:37:53 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 14:35:50 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"
#include <fstream>
#include <iostream>
#include <string.h>

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGrade_exec())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::NotSignedForm());
	else
	{
		std::ofstream out_file(getName().append("_shrubbery").c_str());
		if (out_file.is_open()){
			for (int i = 0; i < 3; i++)
			{
				out_file <<
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
				<< "                ...;%@@@@@%%:;;;;,..   " << "\n"
				<< std::endl;
			}
			out_file.close();
		}
		else
			std::cerr << "ERROR FILE !" << std::endl;
	}
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	(void) obj;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj ) : _target(obj._target)
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) :
AForm(target, 145, 137), _target(target)
{
	if (CONS)
		std::cout << "ShrubberyCreationForm : Constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
AForm("default_SCF", 145, 137), _target("default_SCF")
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
