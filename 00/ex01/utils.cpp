/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:35 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 15:27:11 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int	check_function(std::string str, int (*f)(int))
{
	if (str[0] == '\n' || str[0] == '\0')
		return (0);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!f(str[i]))
			return (0);
	}
	return (1);
}


int	check_index(std::string str, int i)
{
	int	nb;

	if (str[0] == '\n' || str[0] == '\n' || str.length() != 1)
	{
		std::cout << "Enter the index: 1 to " << i << std::endl;
		return (0);
	}
	if (str[0] >= 49 && str[0] <= 56)
	{
		nb = str[0] - '0';
		if (nb > i)
		{
			std::cout << "Enter the index: 1 to " << i << std::endl;
			return (0);
		}
		return (1);
	}
	std::cout << "Enter the index: 1 to " << i << std::endl;
	return (0);
}
