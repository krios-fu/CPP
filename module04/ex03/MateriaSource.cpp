/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:26:26 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/12 15:34:42 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () : amount(0){}

MateriaSource::MateriaSource ( const MateriaSource & obj ) : amount(0)
{
	this->operator=( obj );
}

MateriaSource::~MateriaSource()
{
	
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
	if (this->amount == 4)
		return ;
	for ( size_t i = 0; i < this->amount; i++ )
		if (!this->_materia_source[i])
			return ;
	this->_materia_source[ this->amount++ ] = new_materia;
	
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	for ( size_t i = 0; i < this->amount; i++ )
		if ( this->_materia_source[ i ]->getType() ==  type )
			return this->_materia_source[ i ]->clone();
	return 0;
}