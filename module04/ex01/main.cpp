/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:03:06 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/09 15:49:04 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	Animal *array [42];

	Animal *a = new Cat();
	
	Cat dst = a; 

	for (size_t i = 0; i < 42; i++)
	{
		if (i < 21)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	

	delete [] array ;
	
	return 0;
}
