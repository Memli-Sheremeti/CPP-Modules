/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 18:36:29 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
	std::ofstream	file_dst;
	std::ifstream	file_src;
	std::string		str;
	std::string		s1;
	std::string		s2;
	char			*__s;

	if (ac != 4)
	{
		std::cout << "./a.out filename str1 str2" << std::endl;
		return (0);
	}
	s1 = av[2];
	s2 = av[3];
	file_src.open (av[1]);
	if (file_src.is_open() == false)
	{
		std::cout << "Couldn't open the file" << std::endl;
		return (0);
	}
	__s = strcat(av[1], ".replace");
	file_dst.open(__s ,std::ofstream::out);
	if (file_dst.is_open() == false)
	{
		std::cout << "Couldn't creat the new_file" << std::endl;
		file_src.close();
		return (0);
	}
	while (std::getline(file_src, str))
	{
		if (str == s1)
			str = s2;
		file_dst << str << std::endl;
	}
  	file_src.close();
  	file_dst.close();
  	return (0);
}
