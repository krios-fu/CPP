/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:13:29 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/06 22:47:48 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	
}

ClapTrap::ClapTrap (std::string const & name)
{
	std::cout	<< BLUE"Constructor called" << " ClapTrap"
				<< WHITE << std::endl;
	this->setName(name);
	this->_energy_points = 10;
	this->_hit_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &  clapTrap)
{
	std::cout	<< BLUE"Copy constructor called"
				<< WHITE << std::endl;
	this->operator=(clapTrap);
}

ClapTrap::~ClapTrap()
{
	
	std::cout	<< RED"Destructor called, "
				<< this->getName() << WHITE " ClapTrap "
				<<  std::endl;
}

ClapTrap& ClapTrap::operator= ( const ClapTrap & clapTrap )
{
	std::cout	<< "Assignation operator called"
				<< std::endl;

	this->_name = clapTrap.getName();
	this->_attack_damage = clapTrap.getAttackDamage();
	this->_energy_points = clapTrap.getEnergyPoints();
	this->_hit_points = clapTrap.getHitPoints();
	return (*this);
}


void	ClapTrap::attack( std::string const & target )
{
	if (this->_energy_points > 0)
	{
		std::cout	<< "ClapTrap " << this->getName()
					<< " attack " << target << ", causing "
					<< this->getAttackDamage()
					<< " points of damage !" << std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap " << this->getName()
					<< "could not attack to "
					<< target << std::endl;
	}
	if (this->_energy_points > 0)
		this->_energy_points--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	unsigned int hit_point;

	hit_point = this->getHitPoints();
	if ( hit_point > 0 )
	{
		if( hit_point > amount )
			this->setHitPoints( ( hit_point - amount ) );
		else 
			this->setHitPoints ( 0 );
		std::cout	<< this->getName()
					<< " take damage " << amount << " " << std::endl;
	}
	else 
	{
		std::cout	<< this->getName()
					<< " is dead." << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	int repaired;

	repaired = 0;;
	if ( this->_energy_points > 0 )
	{
		repaired =  this->_hit_points += amount;
		repaired = (repaired > 100) ? 100 : repaired;
		this->setHitPoints( repaired );
		std::cout	<< this->getName()
					<< " has been repaired with " <<  amount
					<< " energy points" << std::endl;
	}
	else
	{
		std::cout	<< this->getName()
					<< " has not been repaired with " <<  amount
					<< " energy points" << std::endl;
	}
	if (this->_energy_points > 0)
		this->_energy_points--;
}

/************* SET & GET ************/

void ClapTrap::setName ( std::string name )
{
	this->_name = name;
}

void ClapTrap::setEnergyPoints( unsigned int energy_points)
{
	this->_energy_points = energy_points;
}

void ClapTrap::setAttackDamage( unsigned int attack_damage )
{
	this->_attack_damage = attack_damage;
}

void ClapTrap::setHitPoints( unsigned int energy_points )
{
	this->_hit_points = energy_points;
}

std::string ClapTrap::getName( void ) const { return this->_name; }

unsigned int ClapTrap::getEnergyPoints( void ) const { return this->_energy_points; }

unsigned int ClapTrap::getAttackDamage( void ) const { return this->_attack_damage; }

unsigned int ClapTrap::getHitPoints( void ) const { return this->_hit_points; }