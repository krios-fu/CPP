/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:43:14 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/03 21:39:06 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Constructor Default, Copy & Destructor
*/

Fixed::Fixed()
{

	this->_raw = 0;
}

Fixed::Fixed ( const float raw ) : _raw(round(raw * (1 << this->_bitFractional))){}

Fixed::Fixed( const int raw ) : _raw(round(raw * (1 << this->_bitFractional))){}

Fixed::Fixed (const Fixed &fixed)
{
	this->operator=(fixed);
}

Fixed::~Fixed()
{

}

/*
** Operators
*/

std::ostream& operator << ( std::ostream &o, const Fixed &obj )
{
	o << obj.toFloat();
	return ( o );
}

Fixed& Fixed::operator = (const Fixed &obj)
{
	this->_raw = obj.getRawBits();
	return ( *this );
}

/*
** ++Fixed
*/

Fixed& Fixed::operator ++ ()
{
	float tmp;

	tmp = this->toFloat();
	tmp = tmp + 0.00390625F ;
	
	this->setRawBits(tmp);
	return ( *this );
}

/*
** Fixed++
*/

Fixed& Fixed::operator ++ ( int i )
{
	(void)i;
	return ( this->operator++() );
}


bool Fixed::operator > (const Fixed &obj) const
{
	return ((this->_raw > obj.getRawBits()));
}

bool Fixed::operator < (const Fixed &obj) const
{
	return ((this->_raw < obj.getRawBits()));
}

bool Fixed::operator == (const Fixed &obj) const
{
	return ((this->_raw == obj.getRawBits()));
}

bool Fixed::operator >= (const Fixed &obj) const
{
	return ((this->_raw >= obj.getRawBits()));
}

bool Fixed::operator <= (const Fixed &obj) const
{
	return ((this->_raw <= obj.getRawBits()));
}

bool Fixed::operator != (const Fixed &obj) const
{
	return ((this->_raw != obj.getRawBits()));
}

/*
**  type Consversion
*/

int Fixed::toInt ( void ) const
{
	return ( ( ( int ) this->_raw / ( int ) ( 1 << this->_bitFractional ) ) );
}

float Fixed::toFloat ( void ) const
{
	return ( ( ( float ) this->_raw / ( float ) ( 1 << this->_bitFractional ) ) );
}

/*
** SET & GET Functions
*/

int Fixed::getRawBits ( void ) const
{

	return (this->_raw);
}

void Fixed::setRawBits ( float raw) 
{
	this->_raw = round(raw * (1 << this->_bitFractional));
}
