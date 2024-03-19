/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/19 17:25:45 by mshereme         ###   ########.fr       */
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

	Animal* ani[100];

	for (int i = 0; i < 50; i++)
		ani[i] = new Dog();
	for (int i = 50; i < 100; i++)
		ani[i] = new Cat();
	for (int i = 0; i < 100; i++)
		delete ani[i];

	std::cout << "----------------------------" << std::endl;
	const Animal tmp;
	{
		Animal GG = tmp;
		Animal *lol = new Dog();
		Animal *wp = lol;
		std::cout << wp->getType() << std::endl;
		delete lol;
	}
	return 0;
}
