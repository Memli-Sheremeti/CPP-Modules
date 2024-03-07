/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:47:39 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/07 13:48:18 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	ft_toupper_str(std::string &str)
{
	for (std::string::iterator it = str.begin(); it!=str.end(); it++)
		*it = toupper(*it);
}

int	main(int ac, char **av)
{
	std::string str;

	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			ft_toupper_str(str);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
