/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:15:56 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/19 09:21:57 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(1);
		mstack.push(2);
		// std::cout << mstack.top() << std::endl;
		// mstack.pop();
		// std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);

		MutantStack<int> m_test(mstack);

		MutantStack<int>::iterator it = m_test.begin();
		MutantStack<int>::iterator ite = m_test.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
		std::cout << mstack.size() << std::endl;
	}
	{
		std::cout << "\n ###################### \n" << std::endl;
		std::stack<int> stack_test;

		stack_test.push(1);
		stack_test.push(2);
		// std::cout << stack_test.top() << std::endl;
		// stack_test.pop();
		// std::cout << stack_test.size() << std::endl;
		stack_test.push(3);
		stack_test.push(4);
		stack_test.push(5);
		stack_test.push(6);

		std::stack<int> s_test(stack_test);

		std::cout << s_test.top()  << std::endl;
		std::cout << s_test.size() << std::endl;
 	}
}
