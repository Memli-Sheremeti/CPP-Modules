/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:34:05 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 16:00:31 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

std::string Contact::get_name(void)
{
	return (this->_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_lastname);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string Contact::get_secret(void)
{
	return (this->_darkest_secret);
}

int	Contact::set_contact(void)
{
	do
	{
		std::cout << "Enter the name: ";
		std::getline (std::cin, this->_name);
		if (!std::cin)
			return (1);
	}
	while(!(check_function(this->_name, &isalpha)));
	do
	{
		std::cout << "Enter the last name: ";
		std::getline (std::cin, this->_lastname);
		if (!std::cin)
			return (1);
	}
	while(!(check_function(this->_lastname, &isalpha)));
	std::cout << "Enter the nickname: ";
	std::getline (std::cin, this->_nickname);
	if (!std::cin)
		return (1);
	do
	{
		std::cout << "Enter the phone number: ";
		std::getline (std::cin, this->_phone_number);
		if (!std::cin)
			return (1);
	}
	while(!(check_function(this->_phone_number, &isdigit)));
	std::cout << "Enter the darkest secret: ";
	std::getline (std::cin, this->_darkest_secret);
	if (!std::cin)
		return (1);
	std::cout << this->_name << ": is added to your phonebook!" << std::endl;
	return (0);
}

Contact::Contact(void)
{
	std::cout << "CONSTRUCTOR Contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "DESTRUCTOR Contact" << std::endl;
	return ;
}
