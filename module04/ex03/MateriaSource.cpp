/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:26:26 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 21:53:10 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () {}

MateriaSource::MateriaSource (const MateriaSource & obj)
{
	this->operator=( obj );
}

MateriaSource & MateriaSource::operator= ( const MateriaSource & obj )
{
	for (size_t i = 0; i < 4; i++)
		this->_materia_source[ i ] = obj._materia_source[ i ];
	this->amount = obj.amount;
	return *this;
}

void MateriaSource::learnMateria ( AMateria* new_materia )
{
	if ( amount <= 4)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->_materia_source[i])
				this->_materia_source[i] = new_materia;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	if (amount > 0)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if ( !(this->_materia_source[i]->getType().compare( type ) ))
				return _materia_source[i]->clone();
		}
	}
	return nullptr;
}