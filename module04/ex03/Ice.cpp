/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:45:09 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 23:44:25 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria("ice") {}

Ice::Ice ( const Ice & obj ) 
	:AMateria( "ice" ) 
{
	this->operator=( obj );
}

Ice::~Ice() {}

Ice & Ice::operator= ( const Ice & obj )
{
	this->_type = obj.getType();
	return *this;
}

void Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;;
}

AMateria* Ice::clone () const 
{
	return ( new Ice( *this ) );
}