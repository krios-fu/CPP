/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:54:41 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/07 16:23:29 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap ()
{
	std::cout	<< BLUE"Default constructor called" << " FragTrap"
				<< WHITE << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	std::cout	<< BLUE"Constructor called" << " FragTrap"
				<< WHITE << std::endl;
	this->setHitPoints( 100 );
	this->setEnergyPoints( 100 );
	this->setAttackDamage( 30 );
}

FragTrap::FragTrap ( const FragTrap & fragTrap ) : ClapTrap( fragTrap._name )
{
	std::cout	<< BLUE"Copy constructor called"
				<< WHITE << std::endl;
	this->operator=( fragTrap );
}

FragTrap::~FragTrap ()
{
	std::cout	<< RED"Destructor called, "
				<< this->getName() << WHITE " FragTrap "
				<<  std::endl;
}

FragTrap & FragTrap::operator= ( const FragTrap & fragTrap )
{
	std::cout	<< "Assignation operator called"
				<< std::endl;

	this->_name = fragTrap.getName();
	this->_attack_damage = fragTrap.getAttackDamage();
	this->_energy_points = fragTrap.getEnergyPoints();
	this->_hit_points = fragTrap.getHitPoints();
	return (*this);
}


void	FragTrap::attack( std::string const & target )
{
	if (this->_energy_points > 0)
	{
		std::cout	<< "FragTrap " << this->getName()
					<< " attack " << target << ", causing "
					<< this->getAttackDamage()
					<< " points of damage !" << std::endl;
	}
	else
	{
		std::cout	<< "FragTrap " << this->getName()
					<< "could not attack to "
					<< target << std::endl;
	}
	if (this->_energy_points > 0)
		this->_energy_points--;
}

void FragTrap::highFivesGuys( void )
{
	if ( this->_energy_points )
		std::cout << "Give me fives guys ... ! ✋ " << std::endl;
	if ( this->_energy_points )
		this->_energy_points--;
}