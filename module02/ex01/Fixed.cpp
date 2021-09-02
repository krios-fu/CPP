/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:43:14 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/02 21:18:16 by krios-fu         ###   ########.fr       */
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

Fixed::Fixed (const Fixed &fixed)
{
	std::cout	<< "Copy constructor called"
				<< std::endl;
	this->_raw = fixed._raw;
}

Fixed::~Fixed()
{
	std::cout	<< "Destructor called"
				<< std::endl;
}

/*
** Operators overload =
*/

Fixed& Fixed::operator = (const Fixed &fixed)
{
	std::cout	<< "Assignation operator called"
				<< std::endl;
	this->_raw = fixed._raw;
	return (*this);
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
