/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:45:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 11:16:07 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


void	display(int x)
{
	std::cout << x << std::endl;
	return ;
}

void	add( int & x )
{
	x = rand() % 10;
	return ;
}

int main(void)
{
	std::vector<int> test(10);
	std::vector<int>::iterator it;

	srand(time(NULL));
	std::for_each(test.begin(), test.end(), add);
	std::for_each(test.begin(), test.end(), display);
	try
	{
		it = easyfind(test, 3);
		std::cout << "EASY FIND : " << *it << std::endl;
	}
	catch(...) {}
	try
	{
		it = easyfind(test, 5);
		std::cout << "EASY FIND : " << *it << std::endl;
	}
	catch(...) { std::cerr << "ERROR" << std::endl; }
	try
	{
		it = easyfind(test, 0);
		std::cout << "EASY FIND : " << *it << std::endl;
	}
	catch(...) {std::cerr << "ERROR" << std::endl;}
	try
	{
		it = easyfind(test, 1);
		std::cout << "EASY FIND : " << *it << std::endl;
	}
	catch(...) {std::cerr << "ERROR" << std::endl;}
	return 0;
}
