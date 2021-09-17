/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:53:28 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 20:31:07 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm ( const std::string target )
	: Form( "ShrubberyCreationForm", 145, 137 ) , _target( target ){}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm & other )
	: Form( other ), _target( other._target ){}

ShrubberyCreationForm::~ShrubberyCreationForm () {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & other )
{
	( void )other;
	return ( *this );
}

const char * ShrubberyCreationForm::FileOpenExeption::what() const throw ()
{
	return "❌ FileOpenExeption";
}

const char * ShrubberyCreationForm::FileWriteExeption::what() const throw ()
{
	return "❌ FileWriteExeption";
}

void ShrubberyCreationForm::execute( Bureaucrat const & other ) const
{
	Form::execute( other );

	std::string const tree[1] = 
	{
		"┈╱╲┈┈┈╱╲┈┈┈╱╲┈┈\n"\
		"╱╯╰╲┈┈╳╳┈┈╱╯╰╲┈\n"\
		"╯╯╰╰╲╱╮╰╲╱╯╯╰╰╲\n"\
		"╯╯╰╰╱╰╯╭╮╲╯╯╰╰╰\n"\
		"╯╯╰╱╯╭╮╰╯╭╲╯╰╰╰\n"\
		"▔▋╱╭╮╰╯╭╮╰╯╲▋▔▔\n"\
		"┈╱╮╰╯╭╮╰╯╭╮╰╲┈┈\n"\
		"┈▔▔▔▔▔▔▋▔▔▔▔▔┈┈\n"
	};
	std::string const name_file( this->_target + "__shrubbery" );
	std::ofstream file;

	file.open( name_file, std::ios::trunc );
	if ( !file.is_open() )
		throw ShrubberyCreationForm::FileOpenExeption();
	
	file << tree[0];

	if ( file.bad() )
	{
		file.close();
		throw FileWriteExeption();
	}
	file.close();
}