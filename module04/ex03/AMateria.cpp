/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:06:53 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 18:41:01 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria ( std::string const & type )
{
	this->_type = type;
}

AMateria::AMateria ( const AMateria & obj )
{
	this->operator= ( obj );
}

AMateria& AMateria::operator= ( const AMateria & obj)
{
	this->_type = obj._type;
	return ( *this );
}

std::string const & AMateria::getType() const
{
	return this->_type;
}