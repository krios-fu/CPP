/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 19:09:11 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal ("Cat")
{
	std::cout	<< "Cat default Constructor called" << std::endl;
}

Cat::Cat (const Cat & obj)
	: Animal ("Cat")
{
	std::cout	<< "Cat copy Constructor called" << std::endl;
	this->operator=( obj );
}

Cat & Cat::operator= (const Cat & Cat)
{
	this->setType( Cat.getType () );
	return *this;
}

Cat::~Cat()
{
	std::cout	<< "Destructor Cat called" << std::endl;
	
}

void Cat::makeSound() const
{
	std::cout << "Miiiaaaawwww" << std::endl;
}

