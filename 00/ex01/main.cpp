/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:15:33 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 15:32:30 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	ft_display_posibility(void)
{
	std::cout << std::setw(10) << "ADD:\n  save a new contact" << std::endl;
	std::cout << std::setw(10) << "SEARCH:\n  display a specific contact" << std::endl;
	return ;
}
int	main(void)
{
	std::string	str;
	PhoneBook	book;

	while (1)
	{
		std::cout << std::setw(10) << "PHONE BOOK:\nEnter a command: ";
		std::getline (std::cin, str);
		if (str == "EXIT")
			break ;
		else if (str == "ADD")
			book.ft_add_contact();
		else if (str == "SEARCH")
			book.ft_show_contact();
		else
			ft_display_posibility();
	}
	// std::cout << PhoneBook.contacts.name << std::endl;
	return (0);
}
