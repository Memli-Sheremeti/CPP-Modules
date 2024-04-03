/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/28 14:09:40 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal* ani[3];

	for (int i = 0; i < 2; i++)
	{
		ani[i] = new Dog();
		ani[i]->makeSound();
		std::cout << ani[i]->getType() << std::endl;
	}
	std::cout << "----------------------------" << std::endl;

	for (int i = 2; i < 3; i++)
	{
		ani[i] = new Cat();
		ani[i]->makeSound();
		ani[i]->getType();
		std::cout << ani[i]->getType() << std::endl;

	}
	std::cout << "----------------------------" << std::endl;

	for (int i = 0; i < 3; i++)
		delete ani[i];

	const Animal tmp;
	{
		Animal GG = tmp;
		Animal *lol = new Dog();
		Animal *wp = lol;
		std::cout << wp->getType() << std::endl;
		delete lol;
	}

	Dog basic;
	{
		std::cout << "basic new idea: ";
		basic.newIdea("salut ca va");
		Dog tmp = basic;
		std::cout << "tmp : ";
		tmp.think();
		std::cout << "tmp new idea: ";
		tmp.newIdea("coucou");
		std::cout << "basic idea: ";
		basic.think();
	}
	return 0;
}
