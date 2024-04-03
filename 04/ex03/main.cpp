/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/28 14:31:17 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "ICharacter.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"
#include "Character.class.hpp"
#include "MateriaSource.class.hpp"
#include "ICharacter.class.hpp"

int main()
{
	std::cout << "------------- Creation Materia --------------" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("lol");
	me->equip(tmp);

	std::cout << "------------- Throwing stuff --------------" << std::endl;

	AMateria* throw_stuff;
	throw_stuff = me->throw_iventory(1);
	me->unequip(1);
	delete throw_stuff;
	throw_stuff = me->throw_iventory(100);
	me->unequip(100);
	delete throw_stuff;

	std::cout << "------------- Using Materia --------------" << std::endl;


	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}

// int main()
// {
// 	ICharacter* me = new Character("me");

// 	AMateria* tmp = new Ice();
// 	me->equip(tmp);
// 	// me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	// me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete tmp;

// 	return 0;
// }
