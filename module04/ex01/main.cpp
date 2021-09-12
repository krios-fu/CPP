/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:03:06 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/12 15:15:39 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
int main()
{

	Animal *array_animal [10];

	Cat *a = new Cat();
	
	Cat *dst = new Cat();

	a->setType("hola");

	*dst = *a; 

	delete a;
	std::cout << std::endl; 
	std::cout << dst->getType();
	std::cout << std::endl; 

	dst->makeSound();
	std::cout << std::endl; 

	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			array_animal[i] = new Dog();
		else
			array_animal[i] = new Cat();
	}

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "[" << i + 1 << "]" << "\t"<< array_animal[i]->getType() << " ";
		array_animal[i]->makeSound();
	}
	

	for (size_t i = 0; i < 10; i++)
		delete array_animal[i];
	delete dst;
	
	return 0;
}
