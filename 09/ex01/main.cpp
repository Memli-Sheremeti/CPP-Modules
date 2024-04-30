/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:45:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/24 13:46:54 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char **av )
{
	if (ac != 2)
		return (std::cerr << "Error" << std::endl, 1);

	try
	{
		RPN res(av[1]);
		res.getRes();
	}
	catch (...)
	{
		std::cerr << "Error" << std::endl;
	}

	return (0);
}
