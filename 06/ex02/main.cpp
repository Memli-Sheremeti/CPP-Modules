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

#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"
#include <cstdlib>

Base * generate( void )
{
	srand(time(NULL));
	int nb = rand() % 3;

	if (nb == 0)
		return (new A());
	else if (nb == 1)
		return (new B());
	else if (nb == 2)
		return (new C());
	else
		return (0);
}

void	identify( Base *p )
{
	if (p == 0)
		throw Base::BaseWrong();
	A* a_ptr = dynamic_cast<A*> (p);
	B* b_ptr = dynamic_cast<B*> (p);
	C* c_ptr = dynamic_cast<C*> (p);
	if (a_ptr)
		std::cout << "Pointer : A" << std::endl;
	else if (b_ptr)
		std::cout << "Pointer : B" << std::endl;
	else if (c_ptr)
		std::cout << "Pointer : C" << std::endl;
	return ;
}

void	identify( Base & p)
{
	try
	{
		static_cast<void> (dynamic_cast<A& >(p));
		std::cout << "Reference : A" << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		static_cast<void> (dynamic_cast<B& >(p));
		std::cout << "Reference : B" << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		static_cast<void> (dynamic_cast<C& >(p));
		std::cout << "Reference : C" << std::endl;
		return ;
	}
	catch (...) {}
	
	return ;
}
int main()
{
	Base *obj;

	obj = generate();
	identify(obj);
	identify(*obj);

	delete obj;
	return 0;
}
