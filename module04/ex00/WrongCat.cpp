/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 19:10:26 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal ("WrongCat")
{
	std::cout	<< "WrongCat default Constructor called" << std::endl;
}

WrongCat::WrongCat (const WrongCat & obj)
	: WrongAnimal ("WrongCat")
{
	std::cout	<< "WrongCat copy Constructor called" << std::endl;
	this->operator=( obj );
}

WrongCat & WrongCat::operator= (const WrongCat & WrongCat)
{
	this->setType( WrongCat.getType () );
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout	<< "Destructor WrongCat called" << std::endl;
	
}

void WrongCat::makeSound() const
{
	std::cout << "Miawwww" << std::endl;
}

