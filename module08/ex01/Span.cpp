/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:31:50 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/24 03:55:29 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span( unsigned int size )
	: _size( size )
{
}

span::span( const span &other )
{
	this->_container.clear();
	this->_size = other._size;
	this->_container = other._container;
}

span::~span( )
{
	this->_container.clear();
}

span& span::operator=( const span &other )
{
	if ( this != &other)
	{
		this->_container.clear();
		this->_size = other._size;
		this->_container = other._container;
	}
	return *this;
}
const char * span::SpanFillGlobalException::what() const throw ()
{
	return "❌ SpanFillGlobalException";
}

const char * span::SpanIntervalException::what() const throw ()
{
	return "❌ SpanIntervalException";
}
void span::addNumber( int N )
{
	if ( this->_container.size() == this->_size )
		throw SpanFillGlobalException();
	this->_container.push_back( N );
}

unsigned int span::shortestSpan( void )
{
	unsigned int diff;

	diff = 0;
	if ( this->_container.size() <= 1 )
		throw SpanIntervalException();
	
	std::vector<int>::iterator start = this->_container.begin();
	std::vector<int>::iterator next = ++this->_container.begin();
	diff = std::abs( *start++ - *next++);
	while ( next != this->_container.end() )
	{
		if ( diff > static_cast<unsigned int> ( ( std::abs( *start - *next ) ) ) )
			diff = std::abs( *start - *next );
		start++;
		next++;
	}
	return diff;
}


unsigned int span::longestSpan( void )
{
	if ( this->_container.size() <= 1 )
		throw SpanIntervalException();
	std::sort( this->_container.begin() , this->_container.end() );
	return( std::abs( *this->_container.begin() - *--this->_container.end() ) );
}

