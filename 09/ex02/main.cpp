/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:45:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/30 14:11:12 by mshereme         ###   ########.fr       */
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

bool ft_comp(unsigned int a, unsigned int b)
{
	return (a < b);
}



// template<typename T>
// struct Less
// {
//     bool operator()(const T& lhs, const T& rhs) const
//     {
//         return lhs < rhs;
//     }
// };

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

	merge_insertion_sort_impl( make_group_iterator(tab.begin(), 1), make_group_iterator(tab.end(), 1), ft_comp);

	std::cout << "##########################" << std::endl;

	return (0);
}
