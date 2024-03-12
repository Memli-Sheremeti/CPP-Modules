/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 15:19:54 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	std::string *stringPtr;
	std::string &stringREF = str;


	str = "HI THIS IS BRAIN";
	stringPtr = &str;
	// std::cout << "STR "<< str << std::endl;
	std::cout << "STR "<< &str << std::endl;
	// std::cout << "stringPtr "<< *stringPtr << std::endl;
	// std::cout << "stringPtr "<< stringPtr << std::endl;
	std::cout << "stringPtr "<< &stringPtr << std::endl;
	// std::cout << "stringREF "<< *stringREF << std::endl;
	// std::cout << "stringREF "<< stringREF << std::endl;
	std::cout << "stringREF "<< &stringREF << std::endl;
	std::cout << "STR "<< str << std::endl;
	std::cout << "stringPtr "<< stringPtr << std::endl;
	std::cout << "stringREF "<< stringREF << std::endl;


	return (0);
}
