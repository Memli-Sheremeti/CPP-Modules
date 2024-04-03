/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 15:45:59 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "Intern.class.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));

	Bureaucrat	memli("memli", 150);
	Bureaucrat	x("x", 1);
	AForm 		*form_R = NULL;
	Intern		stagiaire;

	try
	{
		form_R = stagiaire.makeForm("asl;djfasdl;kfjas;j", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete form_R;
	try
	{
		form_R = stagiaire.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------------" << std::endl;

	try
	{
		memli.executeForm(*form_R);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		x.executeForm(*form_R);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	x.signForm(*form_R);
	try
	{
		x.executeForm(*form_R);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete form_R;
	return 0;
}
