/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:45:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/25 17:30:39 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PmergeMe.hpp"
#include "test.hpp"
# include <iostream>
# include <algorithm>
# include <ctime>
# include <iomanip>
# include <vector>
# include <iterator>
# include <sstream>
# include <istream>

bool	ft_comp( unsigned int a, unsigned int b)
{
	return (a > b);
}

template<typename T> void display( T & tab)
{
	typename T::iterator it = tab.begin();

	std::cout << "[ ";
	for ( ; it != tab.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "]" << std::endl;
}

int main( int ac, char **av )
{
	std::vector<unsigned int> tab;
	if (ac == 1)
		return (0);
	for (int i = 1; i < ac; i++ )
	{
		std::string num = av[i];
		std::istringstream ss(num);
		unsigned int x;

		ss >> x;
		tab.push_back(x);
	}

	// display(tab);
	group_iterator<std::vector<unsigned int>::iterator> grp_it( tab.begin(), tab.size());

	// for (size_t i = 0; i < grp_it.size(); i++)
	// 	std::cout << *((grp_it.base()) + i) << std::endl;

	std::cout << grp_it[0] << std::endl;

	merge_insertion_sort_impl( grp_it, grp_it, ft_comp);

	for (size_t i = 0; i < grp_it.size(); i++)
		std::cout << *((grp_it.base()) + i) << std::endl;
	return (0);
}
