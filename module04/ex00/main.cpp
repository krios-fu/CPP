/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:03:06 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 19:04:52 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main ( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* w_j = new WrongDog();
	const WrongAnimal* w_i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << w_j->getType() << " " << std::endl;
	std::cout << w_i->getType() << " " << std::endl;

	w_i->makeSound(); //will output the cat sound!
	w_j->makeSound();

	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	delete w_i;
	delete w_j;

	return 0;
}