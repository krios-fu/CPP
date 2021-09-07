/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:09:39 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/07 16:24:29 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout	<< BLUE"Default constructor called" << " DiamondTrap"
				<< WHITE << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap (name + "_clap_name") ,  ScavTrap ( name  ) , FragTrap( name ) 
{
	std::cout	<< BLUE"Constructor called" << " DiamondTrap"
				<< WHITE << std::endl;
	this->_name_ = name; 
	this->_hit_points = this->FragTrap::getHitPoints();
	this->_energy_points = this->ScavTrap::getEnergyPoints();
	this->_attack_damage = this->FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap ()
{
	std::cout	<< RED"Destructor called, "
				<< this->getName() << WHITE " DiamondTrap "
				<<  std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap & obj ) : ClapTrap (obj)
{
	std::cout	<< BLUE"Copy constructor called"
				<< WHITE << std::endl;
	// this->operator=( obj );
}

DiamondTrap & DiamondTrap::operator= ( const DiamondTrap & obj )
{

	std::cout	<< "Assignation operator called"
				<< std::endl;
	ClapTrap::operator= ( obj );
	this->_name = obj._name; 
	this->_hit_points = obj.getHitPoints();
	this->_energy_points = obj.getEnergyPoints();
	this->_attack_damage = obj.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack( std::string const & target )
{
	this->ScavTrap::attack( target );
}

void DiamondTrap::whoAmI( void )
{
	std::cout	<< "DiamondTrap name : "GREEN << this->getName()
				<< WHITE" ClapTrap name : "CYAN << this->ClapTrap::getName()
				<< WHITE << std::endl;
}

std::string DiamondTrap::getName ( void )
{
	return this->_name_;
}