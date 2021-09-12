/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:47:01 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 23:54:55 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#define COL "\033[1;36m"
#define RES "\033[0m"

int	main( void )
{
	std::cout << std::endl << COL << "===== Creation test =====" << RES << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	std::cout << std::endl << COL << "===== Equip test =====" << RES << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << COL << "===== Use test =====" << RES << std::endl;
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << COL << "===== Unequip test =====" << RES << std::endl;
	for (int i = 0; i < 4; i++)
		me->unequip(i);
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << std::endl << COL << "===== Deep Copy test =====" << RES << std::endl;
	Character*	tanos = new Character("tanos");
	Character*	tanoscpy = new Character(*tanos);
	Character*	tanoscpy2 = new Character("default");

	*tanoscpy2 = *tanos;
	delete tanos;
	me->use(1, *tanoscpy);
	me->use(0, *tanoscpy2);

	std::cout << std::endl << COL << "===== Unequip and kill all =====" << RES << std::endl;

	for (int i = 0; i < 4; i++)
		me->unequip(i);
	std::cout << std::endl;

	delete tanoscpy;
	delete tanoscpy2;
	delete bob;
	delete me;
	delete src;

	return 0;
}