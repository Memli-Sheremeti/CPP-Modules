/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:34:05 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 15:42:54 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"


int	PhoneBook::get_nb_contact(void)
{
	return (this->_nb_of_contact);
}

void	PhoneBook::ft_add_contact(void)
{
	this->_contacts[this->_nb_of_contact % MAX_CONTACT].set_contact();
	this->set_nb_contact();
	return ;
}

std::string trunck_the_length(std::string str)
{
	if (str.length() < 11)
		return (str);
	return (str.substr(0, 9) + ".");
}

void	PhoneBook::ft_show_contact(void)
{
	int			i;
	size_t		index;
	std::string	str;

	if (this->get_nb_contact() == 0)
	{
		std::cout << "Nobody is in your Phone Book!" << std::endl;
		return ;
	}
	i = 0;
	while (i < MAX_CONTACT && i < this->get_nb_contact())
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << std::setw(10) << " | ";
		str = this->_contacts[i % MAX_CONTACT].get_name();
		std::cout << std::setw(10) << trunck_the_length(str) << " | ";
		str = this->_contacts[i % MAX_CONTACT].get_last_name();
		std::cout << std::setw(10) << trunck_the_length(str) << " | ";
		str = this->_contacts[i % MAX_CONTACT].get_nickname();
		std::cout << std::setw(10) << trunck_the_length(str) << std::endl;
		i++;
	}
	do
	{
		std::cout << std::setw(10) << "Enter the index of the contact: ";
		std::getline (std::cin, str);

	} while (!(check_index(str, i)));

	index = (str[0] - '0') - 1;
	str = this->_contacts[index].get_name();
	std::cout << std::setw(10) << trunck_the_length(str) << " | ";
	str = this->_contacts[index].get_last_name();
	std::cout << std::setw(10) << trunck_the_length(str) << " | ";
	str = this->_contacts[index].get_nickname();
	std::cout << std::setw(10) << trunck_the_length(str) << " | ";
	str = this->_contacts[index].get_phone_number();
	std::cout << std::setw(10) << trunck_the_length(str) << " | ";
	str = this->_contacts[index].get_secret();
	std::cout << std::setw(10) << trunck_the_length(str) << std::endl;
	return ;
}

void PhoneBook::set_nb_contact(void)
{
	this->_nb_of_contact = this->get_nb_contact();
	this->_nb_of_contact++;
	return ;
}

PhoneBook::PhoneBook(void)
{
	this->_nb_of_contact = 0;
	std::cout << "CONSTRUCTOR" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "DESTRUCTOR" << std::endl;
	return ;
}

// Contact::Contact(const Contact& ToCopy)
// {
//     Contact::operator=(ToCopy);
//     std::cout << RESET << "Contact " << ToCopy._first_name << " copied." << std::endl;
//     return ;
// }

// Contact& Contact::operator=(const Contact &rhs)
// {
//     this->_first_name = rhs._first_name;
//     this->_last_name = rhs._last_name;
//     this->_nickname = rhs._nickname;
//     this->_phone_number = rhs._phone_number;
//     this->_darkest_secret = rhs._darkest_secret;
//     return (*this);
// }
