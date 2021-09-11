/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:51:07 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 23:39:26 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->amount = 0;
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character( std::string name )
{
	this->_name = name;
	this->amount = 0;
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character ( const Character & obj )
{
	this->_name = obj.getName();

	for (size_t i = 0; i < obj.amount; i++)
		this->equip( obj._materia[i] );
	this->amount = obj.amount;
}

Character::~Character()
{
	for (size_t i = 0; i < this->amount; i++)
		delete this->_materia[i];
}

Character & Character::operator= ( Character const & obj )
{
	this->_name = obj.getName();

	for (size_t i = 0; i < this->amount; i++)
			delete this->_materia[i];
	this->amount = 0;
	for (size_t i = 0; i < obj.amount; i++)
		this->equip( obj._materia[i] );
	this->amount = obj.amount;
	return *this;
}

void Character::equip( AMateria* m )
{
	for (size_t i = 0; i < this->amount; i++)
		if ( this->_materia[i] == m)
			break ;
	this->_materia[this->amount++] = m;
}

void	Character::unequip( int idx )
{
	for (size_t i = idx ; i < this->amount - 1; i++)
	{
		this->_materia[i] = this->_materia[i + 1];
		this->_materia[ i +  1] = nullptr;
	}
	this->amount--;
}

void Character::use(int idx, ICharacter &target)
{
	this->_materia[idx]->use(target);
}

std::string const & Character::getName() const
{
	return this->_name;
}