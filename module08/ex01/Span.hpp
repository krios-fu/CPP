/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:31:53 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/24 01:06:16 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <iostream>
#include <exception>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _container;
		Span(/* args */);
	public:
		Span( unsigned int size );
		Span( const Span & other );
		~Span();

		Span & operator=( const Span & other );

		void addNumber( int N );

		unsigned int shortestSpan( void );
		unsigned int longestSpan( void );

		class SpanFillGlobalException : public std::exception
		{
			public:
			virtual const char * what() const throw ();
		};

		class SpanIntervalException : public std::exception
		{
			public:
			virtual const char * what() const throw ();
		};

		template <typename Iterator>
		void addNumber( Iterator begin, Iterator end )
		{
			if ( ( this->_container.size() + std::distance( begin, end) ) > this->_size )
				throw SpanFillGlobalException();
				std::copy( begin, end, std::back_inserter( this->_container ) );
		};
};

#endif