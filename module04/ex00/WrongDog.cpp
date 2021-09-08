/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 19:09:35 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
	: WrongAnimal ("WrongDog")
{
	std::cout	<< "WrongDog default Constructor called" << std::endl;
}

WrongDog::WrongDog (const WrongDog & obj)
	: WrongAnimal ("WrongDog")
{
	std::cout	<< "WrongDog copy Constructor called" << std::endl;
	this->operator=( obj );
}

WrongDog & WrongDog::operator= (const WrongDog & wrong_dog)
{
	this->setType( wrong_dog.getType () );
	return *this;
}

WrongDog::~WrongDog()
{
	std::cout	<< "Destructor WrongDog called" << std::endl;
	
}

void WrongDog::makeSound() const
{
	std::cout << "Waowwwwww" << std::endl;
}

