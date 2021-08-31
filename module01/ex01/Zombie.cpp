/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:17:08 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 19:23:55 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie( std::string  name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Destroyed..." << std::endl;
}

Zombie* newZombie( std::string name )
{
	Zombie* zombie = new Zombie ( name );
	return ( zombie );
}

void Zombie::announce ( void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name)
{
	this->_name = name;
}

 