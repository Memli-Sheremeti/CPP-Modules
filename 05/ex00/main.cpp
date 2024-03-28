/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/27 14:33:58 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int main()
{
	// Bureaucrat n0("memli", 0);
	std::cout << "\n######################################\n" << std::endl;
	try
	{
		Bureaucrat n1("memli", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n######################################\n" << std::endl;

	try
	{
		Bureaucrat n2("memli", 151);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n######################################\n" << std::endl;


	try
	{
		Bureaucrat n3("memli", -1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n######################################\n" << std::endl;

	Bureaucrat n4("CAPO", 100);
	std::cout << n4 << std::endl;
	n4.upGrade();
	std::cout << "Congragts " << n4.getName() << " you have been promoted !" << std::endl;
	std::cout << n4 << std::endl;

	std::cout << "\n######################################\n" << std::endl;


	n4.downGrade();
	std::cout << "Congragts " << n4.getName() << " you have been impeded !" << std::endl;
	std::cout << n4 << std::endl;

	std::cout << "\n######################################\n" << std::endl;


	Bureaucrat n5("CAPI", 1);
	std::cout << n5 << std::endl;
	std::cout << "Congragts " << n4.getName() << " you have been promoted !" << std::endl;
	try
	{
		n5.upGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n######################################\n" << std::endl;

	Bureaucrat n6("CAPA", 150);
	std::cout << n6 << std::endl;
	std::cout << "Congragts " << n5.getName() << " you have been impeded !" << std::endl;
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
