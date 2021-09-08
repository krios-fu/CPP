/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:11:25 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 17:45:15 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout	<< "WrongAnimal default Constructor called" << std::endl;
	this->_type = "undefine";
}

WrongAnimal::WrongAnimal (std::string type) : _type( type )
{
	std::cout	<< "WrongAnimal Constructor called" << std::endl;

}

WrongAnimal::WrongAnimal (const WrongAnimal & obj)
{
	std::cout	<< "WrongAnimal copy Constructor called" << std::endl;
	WrongAnimal::operator= (obj);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called  " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal & obj)
{
	this->setType( obj.getType() );
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "( Silence )" << std::endl;
}

/****** GET &  SET */


std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}