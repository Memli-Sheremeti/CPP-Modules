/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 13:40:53 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* atem = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();
	std::cout << l->getType() << " " << std::endl;
	l->makeSound(); //will output the cat sound!
	atem->makeSound();

	delete atem;
	delete l;

	Cat chat;
	Cat berger;

	Cat maia = chat;

	std::cout << maia.getType() << " " << std::endl;
	std::cout << chat.getType() << " " << std::endl;

	berger = maia;
	std::cout << berger.getType() << " " << std::endl;

	Dog chien;
	Dog allemand;

	Dog boston = chien;

	std::cout << boston.getType() << " " << std::endl;
	std::cout << chien.getType() << " " << std::endl;

	allemand = boston;
	std::cout << allemand.getType() << " " << std::endl;
	return 0;
}
