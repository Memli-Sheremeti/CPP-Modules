/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:23:29 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main()
{
	// Bureaucrat n0("memli", 0);

	try
	{
		Bureaucrat n1("memli", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form f1("alors", 0, 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat n2("memli", 151);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form f2("alors", 151, 151);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat n3("memli", -1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form f3("alors", 0, 100);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form f4("alors", 100, 151);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << " ----------------------------------------------- " << std::endl;

	Bureaucrat	n4("CAPO", 100);
	Form		f5("ALPHA", 100, 100);

	std::cout << n4 << std::endl;
	std::cout << f5 << std::endl;
	std::cout << "Congragts " << n4.getName() << " you have been promoted !" << std::endl;
	n4.upGrade();
	n4.signForm(f5);


	std::cout << n4 << std::endl;
	n4.downGrade();
	std::cout << "Congragts " << n4.getName() << " you have been impeded !" << std::endl;
	std::cout << n4 << std::endl;

	std::cout << " ----------------------------------------------- " << std::endl;

	Bureaucrat	n5("CAPI", 1);
	Form		f6("BETA", 20, 20);

	std::cout << n5 << std::endl;
	std::cout << f6 << std::endl;

	n5.signForm(f6);
	std::cout << "Congragts " << n5.getName() << " you have been promoted !" << std::endl;
	try
	{
		n5.upGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << " ----------------------------------------------- " << std::endl;

	Bureaucrat	n6("CAPA", 150);
	Form		f7("CHARLIE", 100, 100);

	std::cout << n6 << std::endl;
	std::cout << f7 << std::endl;

	n6.signForm(f7);
	std::cout << "Congragts " << n6.getName() << " you have been impeded !" << std::endl;
	try
	{
		n6.downGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
