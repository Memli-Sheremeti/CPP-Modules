/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 16:32:01 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.class.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return 1;
	ScalarConverter::convert(av[1]);

	return 0;
}
