/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:27:11 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/01 00:54:19 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB( std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}


void HumanB::attack( void )
{
	std::cout	<< this->_name
				<< " attacks with his "
				<< this->_weapon->getType()
				<< std::endl;
}

void HumanB::setType( std::string name)
{
	this->_name = name;
}

std::string HumanB::getType ( void ) const
{
	return ( this->_name );
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}