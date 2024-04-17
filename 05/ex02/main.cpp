/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 15:48:08 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(NULL));

	Bureaucrat memli ("memli", 150);
	Bureaucrat x ("x", 1);
	Bureaucrat y ("y", 138);
	Bureaucrat z ("y", 46);
	Bureaucrat w ("y", 6);

	AForm *form_S = new ShrubberyCreationForm("lol");
	AForm *form_R = new RobotomyRequestForm();
	AForm *form_P = new PresidentialPardonForm();


	try
	{
		memli.executeForm(*form_S);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		x.executeForm(*form_S);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	x.signForm(*form_S);
	try
	{
		y.executeForm(*form_S);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		x.executeForm(*form_S);
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
		z.executeForm(*form_R);
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

	std::cout << "-------------------------------------------------" << std::endl;

		try
	{
		memli.executeForm(*form_P);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		x.executeForm(*form_P);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	x.signForm(*form_P);
	try
	{
		w.executeForm(*form_P);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		x.executeForm(*form_P);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete form_S;
	delete form_P;
	delete form_R;

	return 0;
}
