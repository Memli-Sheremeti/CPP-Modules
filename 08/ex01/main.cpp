/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:15:56 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 14:43:23 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
	srand(time(NULL));
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(9);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(11);
	try
	{
		sp.addNumber(50);
	}
	catch (...) { std::cout << "Error of length" << std::endl; }

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span test = Span(10000);

	test.addRandomNum(150);
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	return 0;
}
