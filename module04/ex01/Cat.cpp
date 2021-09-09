/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/09 15:10:58 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal ("Cat")
{
	this->_brain = new Brain();
	std::cout	<< "Cat default Constructor called" << std::endl;
}

Cat::Cat (const Cat & obj)
	: Animal ("Cat")
{
	this->_brain = new Brain();
	std::cout	<< "Cat copy Constructor called" << std::endl;
	this->operator=( obj );
}

Cat & Cat::operator= (const Cat & cat)
{
	this->setType( cat.getType() );
	this->_brain = cat._brain;
	return *this;
}

Cat::~Cat()
{
	std::cout	<< "Destructor Cat called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "Miiiaaaawwww" << std::endl;
}

