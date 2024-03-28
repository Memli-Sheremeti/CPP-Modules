/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:27:51 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/27 15:02:05 by mshereme         ###   ########.fr       */
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
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("lol");
	me->equip(tmp);

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
