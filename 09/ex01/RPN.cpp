/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:22:10 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/24 14:08:36 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int ft_parse( std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isspace(str[i]))
			continue;
		if (isalpha(str[i]) && str[i] != '-' && str[i] != '+' && str[i] != '*' && str[i] != '/')
			return (1);
		if (isdigit(str[i]) && i < str.size() - 1)
		{
			if (isdigit(str[i + 1]))
				return 1;
		}
	}
	return 0;
}

RPN::RPN( std::string str )
{
	if (ft_parse(str))
		throw std::logic_error("ERROR");
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isspace(str[i]))
			continue;
		if (isdigit(str[i]))
			stack.push(str[i] - 48);
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (stack.size() < 2)
				throw std::logic_error("ERROR");
			x = stack.top();
			stack.pop();
			if (stack.size() < 1)
				throw std::logic_error("ERROR");
			switch (str[i])
			{
				case '+':
				y = stack.top() + x;
					break;
				case '-':
				y = stack.top() - x;
					break;
				case '*':
				y = stack.top() * x;
					break;
				case '/':
				if (x == 0)
					throw std::logic_error("ERROR");
				y = stack.top() / x;
					break;
			}
			stack.pop();
			stack.push(y);
		}
	}
	if (stack.size() != 1)
		throw std::logic_error("ERROR");
	return ;
}

void	RPN::getRes( void ) const
{
	std::cout << stack.top() << std::endl;
	return ;
}
