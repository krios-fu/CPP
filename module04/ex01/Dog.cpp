/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 19:09:43 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal ("Dog")
{
	std::cout	<< "Dog default Constructor called" << std::endl;
}

Dog::Dog (const Dog & obj)
	: Animal ("Dog")
{
	std::cout	<< "Dog copy Constructor called" << std::endl;
	this->operator=( obj );
}

Dog & Dog::operator= (const Dog & Dog)
{
	this->setType( Dog.getType () );
	return *this;
}

Dog::~Dog()
{
	std::cout	<< "Destructor Dog called" << std::endl;
	
}

void Dog::makeSound() const
{
	std::cout << "Waaaowwww" << std::endl;
}

