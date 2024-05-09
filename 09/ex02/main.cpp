/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:45:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/05/09 14:17:04 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdio.h>
#include <sys/time.h>

template <class T>
void ft_display( T &tab )
{
	static int i = 0;

	if (!i)
		std::cout << "Before: ";
	else
		std::cout << "After: ";

	for (typename T::iterator it = tab.begin(); it != tab.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	i++;
}

long long int	ft_timer_set(void)
{
	struct timeval	tv;
	long long int	timer;

	gettimeofday(&tv, NULL);
	timer = tv.tv_usec;
	return (timer);
}

int	ft_get_time( int ac, int start_time)
{
	int	current_time;

	current_time = ft_timer_set() - start_time;

	std::cout << "Time to process a range of " << ac << " elements with std::vector : " <<
	current_time << " ms" << std::endl;
	return (current_time);
}

template <class T>
int	ft_parsing_number( T &tab, char **av, int ac)
{
	for (int i = 1; i < ac; i++ )
	{
		std::string num = av[i];
		if (num.length() > 10)
			return (1);
		for (std::string::iterator it = num.begin(); it != num.end(); it++)
		{
			if (!std::isdigit(*it))
				return (1);
		}
		std::istringstream ss(num);
		unsigned long x;
		ss >> x;
		if (x > 4294967295)
			return (1);
		tab.push_back(x);
	}
	return (0);
}


int main( int ac, char **av )
{
	std::vector<unsigned int> tab;
	std::vector<unsigned int> tab_1;

	std::deque<unsigned int> tab_deque;
	std::deque<unsigned int> tab1_deque;


	if (ac == 1)
		return (2);
	if (ft_parsing_number(tab, av, ac) || ft_parsing_number(tab_deque, av, ac))
	{
		std::cerr << "Error" << std::endl;
		return 3;
	}
	tab_1 = tab;
	tab1_deque = tab_deque;
	{
		{
			int time = ft_timer_set();
			ft_display(tab);
			group_iterator<std::vector<unsigned int>::iterator> begin = make_group_iterator(tab.begin(), 1);
			group_iterator<std::vector<unsigned int>::iterator> end = make_group_iterator(tab.end(), 1);
			merge_insertion_sort_impl(begin, end);
			ft_display(tab);
			ft_get_time(ac + 1, time);
		}
		{
			int time = ft_timer_set();
			std::sort(tab_1.begin(), tab_1.end());
			ft_get_time(ac + 1, time);
		}
	}
	{
		{
			int time = ft_timer_set();
			ft_display(tab_deque);
			group_iterator<std::deque<unsigned int>::iterator> be = make_group_iterator(tab_deque.begin(), 1);
			group_iterator<std::deque<unsigned int>::iterator> ed = make_group_iterator(tab_deque.end(), 1);
			mgsl(be, ed);
			ft_display(tab_deque);
			ft_get_time(ac + 1, time);
		}
		{
			int time = ft_timer_set();
			std::sort(tab1_deque.begin(), tab1_deque.end());
			ft_get_time(ac + 1, time);
		}
	}
	return (0);
}
