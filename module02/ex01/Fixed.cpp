/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:43:14 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/03 17:14:08 by krios-fu         ###   ########.fr       */
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
** Operators  = << 
*/

std::ostream& operator << ( std::ostream &o, const Fixed &obj )
{
	o << obj.toFloat();
	return ( o );
}

Fixed& Fixed::operator = (const Fixed &fixed)
{
	std::cout	<< "Assignation operator called"
				<< std::endl;
	this->_raw = fixed._raw;
	return (*this);
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
	std::cout	<< "getRawBits member function called"
				<< std::endl;
	return (this->_raw);
}

void Fixed::setRawBits ( int raw) 
{
	this->_raw = raw;
}
