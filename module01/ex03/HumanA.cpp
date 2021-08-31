/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 22:07:01 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/01 01:01:21 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon ( weapon )
{
	this->_name = name;
}

HumanA::~HumanA() {}

void HumanA::attack( void )
{
	std::cout	<< this->_name
				<< " attacks with his "
				<< this->_weapon.getType()
				<< std::endl;
}

std::string HumanA::getName( void ) const
{
	return ( this->_name);
}


void HumanA::setName( std::string name )
{
	this->_name = name;
}
