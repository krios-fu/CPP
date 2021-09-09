/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/09 15:14:09 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal ("Dog")
{
	this->_brain = new Brain();
	std::cout	<< "Dog default Constructor called" << std::endl;
}

Dog::Dog (const Dog & obj)
	: Animal ("Dog")
{
	this->_brain = new Brain();
	std::cout	<< "Dog copy Constructor called" << std::endl;
	this->operator=( obj );
}

Dog & Dog::operator= (const Dog & dog)
{
	this->setType( dog.getType() );
	this->_brain = dog._brain;
	return *this;
}

Dog::~Dog()
{
	std::cout	<< "Destructor Dog called" << std::endl;
	delete this->_brain;	
}

void Dog::makeSound() const
{
	std::cout << "Waaaowwww" << std::endl;
}

