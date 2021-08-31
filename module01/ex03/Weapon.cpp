/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:54:59 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 22:56:50 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::Weapon( std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType( void ) const
{
	return (this->_type);
}

void Weapon::setType( std::string type)
{
	this->_type = type;
}
