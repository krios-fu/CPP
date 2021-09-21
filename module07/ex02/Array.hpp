/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:32:26 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/21 20:36:52 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T *_data;
		size_t _size;
	public:
		Array() : _data( new T[0]() ), _size( 0 ) {};
		Array( unsigned int n) : _data( new T[n]() ), _size(n) {};
		Array( const Array<T> & other )
		{
			this->_data = new T[other.getSize()]();
			this->_size = other.getSize();
			for (size_t i = 0; i < other._size; i++)
				this->_data[i] = other._data[i];
		};

virtual	~Array()
		{
			delete [] this->_data;
		};

		Array & operator = ( const Array & other )
		{
			if (this == other)
				return *this;
			this->_data = new T[ other.getSize() ]();
			this->_size = other.getSize();
			for (size_t i = 0; i < other.getSize(); i++)
				this->_data[i] = other._data[i];
			return *this;
		};

		T &operator [] ( unsigned int n )
		{
			if ( n > static_cast< unsigned int >( this->_size ) - 1)
				throw ArrayGlobalException();
			return( this->_data[n] );
		};

		size_t getSize ( void ) const
		{
			return this->_size;
		};

		class ArrayGlobalException : public std::exception 
		{
			public:
				virtual const char * what() const throw () 
				{
					return "❌  Fail access ";
				};
		};
 

};

#endif