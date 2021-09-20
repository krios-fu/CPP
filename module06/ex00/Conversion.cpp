/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:10:25 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/20 18:22:27 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion ( const std::string & str )
			: _string( str ) {}

Conversion::Conversion ( Conversion const & other )
			: _string( other._string ){}

Conversion::~Conversion(){}

Conversion & Conversion::operator= ( Conversion const & other )
{
	(void)other;
	return *this;
}

void Conversion::displayChar( void )
{
	if ( this->_string.length() == 1
		&& isdigit( static_cast <int> (this->_string.c_str()[0]) ) ==  false )
			std::cout << "char: " << static_cast <char> ( this->_string.c_str()[0] ) << std::endl;
	else
	{
		try
		{
			int _chararcter =  static_cast<int> ( std::stoi( this->_string ) );
			
			if ( isprint( _chararcter ) )
				std::cout << "char: " << "'" <<static_cast <char> ( _chararcter ) << "'" << std::endl;
			if (  _chararcter <= 32 || _chararcter >= 127 )
				std::cout << "char: " << "Non displayable" << std::endl;
		}
		catch(std::invalid_argument&)
		{
			std::cout << "char: " << "impossible" << std::endl;
		}
		catch (std::out_of_range&)
		{
			std::cout << "char: Non displayable" << std::endl;
		}
	}
	return ;
}

void Conversion::displayInt ( void )
{
	try
	{
		int num;
		num = static_cast<int>( std::stoi( this->_string ) );
		std::cout << "int: " << num << std::endl; 
	}
	catch( std::invalid_argument& )
	{
		std::cout << "int: " << "impossible" << std::endl;
	}
	catch ( std::out_of_range& )
	{
		std::cout << "int: " << "Non displayable" << std::endl;
	}
	return ;
}

void Conversion::displayFloat( void )
{
	try
	{
		float num;

		num = static_cast < float > ( std::stof( this->_string ) );
		std::cout << "float: " << num;
		if (roundf( num ) == num )
			std::cout << ".0";
		std::cout << "f" << std::endl;

	}
	catch( std::invalid_argument& )
	{
		std::cout << "float: " << "impossible" << std::endl;
	}
	catch ( std::out_of_range& )
	{
		std::cout << "float: " << "Non displayable" << std::endl;
	}
	
}

void Conversion::displayDouble( void )
{
	try
	{
		double num;

		num = static_cast < double > ( std::stod( this->_string ) );
		std::cout << "double: " << num;
		if (roundf( num ) == num )
			std::cout << ".0";
		std::cout  << std::endl;
	}
	catch( std::invalid_argument& )
	{
		std::cout << "double: " << "impossible" << std::endl;
	}
	catch ( std::out_of_range& )
	{
		std::cout << "double: " << "Non displayable" << std::endl;
	}
	return ;
}


void Conversion::displayTypes( void )
{
	void ( Conversion::*dTypes[ 4 ] )( void ) = 
	{
		dTypes[ 0 ] = &Conversion::displayChar,
		dTypes[ 1 ] = &Conversion::displayInt,
		dTypes[ 2 ] = &Conversion::displayFloat,
		dTypes[ 3 ] = &Conversion::displayDouble
	};
		for (size_t i = 0; i < 4; i++)
			( this->*dTypes[i] )();
	return ;
}


const std::string & Conversion::getString( void ) const 
{
	return this->_string;
}