/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:54:34 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 23:44:10 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure ()
	: AMateria( "cure" ) {}

Cure::Cure( const Cure & obj )
	: AMateria( "cure")
{
	this->operator=( obj );
}

Cure::~Cure (){}


Cure & Cure::operator= ( const Cure & obj )
{
	this->_type = obj.getType();
	return *this;
}

AMateria* Cure::clone() const 
{
	return  ( new Cure( *this ) );
}

void Cure::use ( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}


