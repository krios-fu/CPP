/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:54:28 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/06 23:46:17 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name ) : ClapTrap( name )
{
	std::cout	<< BLUE"Constructor called" 	<< " ScavTrap "
				<< WHITE << std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->_gate = 0;
}

ScavTrap::ScavTrap(const ScavTrap & obj)  : ClapTrap( obj._name )
{
	std::cout	<< BLUE"Copy constructor called"
				<< WHITE << std::endl;
	this->operator=(obj);
}


ScavTrap& ScavTrap::operator= ( const ScavTrap & scavTrap ) 
{
	std::cout	<< "Assignation operator called"
				<< std::endl;

	this->_name = scavTrap.getName();
	this->_attack_damage = scavTrap.getAttackDamage();
	this->_energy_points = scavTrap.getEnergyPoints();
	this->_hit_points = scavTrap.getHitPoints();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout	<< RED"Destructor called, " 
				<< this->getName() << WHITE " ScavTrap "
				<<  std::endl;
}

void	ScavTrap::attack( std::string const & target )
{
	if (this->_energy_points > 0)
	{
		std::cout	<< "ScavTrap " << this->getName()
					<< " attack " << target << ", causing "
					<< this->getAttackDamage()
					<< " points of damage !" << std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap " << this->getName()
					<< "could not attack to "
					<< target << std::endl;
	}
	if ( this->_energy_points )
		this->_energy_points--;
}


bool ScavTrap::getGate( void ) const 
{
	return this->_gate;
}

void ScavTrap::guardGate( void )
{
	if(_gate)
	{
		this->_gate = 0;
		std::cout << "ScavTrap have enterred in OFF Gate keeper mode" << std::endl;		
	}
	else
	{
		this->_gate = 1;
		std::cout << "ScavTrap have enterred in ON Gate keeper mode" << std::endl;
	}
	if ( this->_energy_points )
		this->_energy_points--;
}