/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:15:33 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/13 13:18:57 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	ft_display_posibility( void )
{
	std::cout << std::setw(10) << "ADD:\n  save a new contact." << std::endl;
	std::cout << std::setw(10) << "SEARCH:\n  display a specific contact." << std::endl;
	std::cout << std::setw(10) << "EXIT:\n  quit the phonebook." << std::endl;

	return ;
}

void	ft_display_signal_quit( void )
{
	std::cout << "------Bye bye---------" << std::endl;

	return ;
}

int	main(void)
{
	std::string	str;
	PhoneBook	book;

	while (true)
	{
		std::cout << std::setw(10) << "------PHONE BOOK---------\nEnter a command: ";
		std::getline (std::cin, str);
		if (!std::cin)
			return (1);
		else if (str == "EXIT")
		{
			ft_display_signal_quit();
			break ;
		}
		else if (str == "ADD")
		{
			if (book.ft_add_contact())
				{
					ft_display_signal_quit();
					return (1);
				}
		}
		else if (str == "SEARCH")
		{
			if (book.ft_show_contact())
				{
					ft_display_signal_quit();
					return (1);
				}
		}
		else
			ft_display_posibility();
	}
	return (0);
}
