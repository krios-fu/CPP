/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:43:14 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/04 03:09:22 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Constructor Default, Copy & Destructor
*/

Fixed::Fixed()
{
	std::cout	<< "Default constructor called"
				<< std::endl;

	this->_raw = 0;
}

Fixed::Fixed ( const float raw ) : _raw(round(raw * (1 << this->_bitFractional)))
{
	std::cout	<< "Float constructor called"
				<< std::endl;	
}

Fixed::Fixed( const int raw ) : _raw(round(raw * (1 << this->_bitFractional)))
{
	std::cout	<< "Int constructor called"
				<< std::endl;
}

Fixed::Fixed (const Fixed &fixed)
{
	std::cout	<< "Copy constructor called"
				<< std::endl;
	this->operator=(fixed);
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called"
				<< std::endl;

}

/*
** Operators
*/

std::ostream& operator<< ( std::ostream &o, const Fixed &obj )
{
	o << obj.toFloat();
	return ( o );
}

Fixed& Fixed::operator= (const Fixed &obj)
{
	this->_raw = obj.getRawBits();
	return ( *this );
}

Fixed Fixed::operator ++ ()
{
	this->_raw++;
	return ( *this );
}

Fixed Fixed::operator++ ( int i )
{
	Fixed tmp( *this );

	(void)i;
	this->operator++();
	return ( tmp );
}

Fixed Fixed::operator-- ()
{
	this->_raw--;
	return ( *this );
}

Fixed Fixed::operator-- ( int i )
{
	Fixed tmp( *this );

	(void)i;
	this->operator--();
	return ( tmp );
}


Fixed	Fixed::operator+ ( const Fixed &obj )
{
	this->setRawBits( this->getRawBits() + obj.getRawBits() );
	return (*this);
}

Fixed	Fixed::operator- ( const Fixed &obj )
{
	this->setRawBits( this->getRawBits() - obj.getRawBits() );
	return (*this);
}

Fixed Fixed::operator* ( Fixed const &obj )
{
	Fixed tmp( *this );
	long aux1, aux2;

	aux1 = ((long)this->getRawBits());
	aux2 = ((long)obj.getRawBits());
	tmp.setRawBits( (aux1 * aux2) / (1 << this->_bitFractional) );
	return ( tmp );
}

Fixed Fixed::operator/ ( Fixed const &obj )
{
	Fixed tmp( *this );
	long aux1, aux2;

	aux1 = ( (long)this->getRawBits() );
	aux2 = ( (long)obj.getRawBits() );
	tmp.setRawBits( (aux1 * (1 << this->_bitFractional)) / aux2 );
	return ( tmp );
}


/******** Logical *********/

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

void Fixed::setRawBits ( int const raw)
{
	this->_raw = raw;
}
