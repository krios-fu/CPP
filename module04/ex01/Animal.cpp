/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:11:25 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 19:09:21 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout	<< "Animal default Constructor called" << std::endl;
	this->_type = "undefine";
}

Animal::Animal (std::string type) : _type( type )
{
	std::cout	<< "Animal Constructor called" << std::endl;

}

Animal::Animal (const Animal & obj)
{
	std::cout	<< "Animal copy Constructor called" << std::endl;
	Animal::operator= (obj);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called  " << std::endl;
}

Animal& Animal::operator=(const Animal & obj)
{
	this->setType( obj.getType() );
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "( Silence )" << std::endl;
}

/****** GET &  SET */


std::string Animal::getType() const
{
	return this->_type;
}

void Animal::setType(std::string type)
{
	this->_type = type;
}