/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:26:54 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/18 00:31:36 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( Intern const & other )
{
	( void ) other;
}

Intern::~Intern() {}

Intern & Intern::operator= ( Intern const & other )
{
	( void ) other;
	return *this;
}

Form* Intern::makeShrubbery( std::string const & target )
{
	return new ShrubberyCreationForm( target );
}

Form* Intern::makeRoboto( std::string const & target )
{
	return new RobotomyRequestForm( target );
}

Form* Intern::makePresidential( std::string const & target )
{
	return new PresidentialPardonForm( target );
}

const char* Intern::MakeFormException::what() const throw ()
{
	return "❌ MakeFormException";
}

Form* Intern:: makeForm( std::string const & name_form, std::string const & target_name )
{
	Form * ( Intern::*fPoint[3] )(std::string const &) =
	{
		&Intern::makeShrubbery,
		&Intern::makeRoboto,
		&Intern::makePresidential
	};

	std::string const nameForm[3] = 
	{
		"Shrubbery Creation",
		"Robotomy Request",
		"Presidential Pardon"
	};

	for (size_t i = 0; i < 3; i++)
	{
		if ( nameForm[i] == name_form )
			return ( this->*fPoint[i] )( target_name );
	}
	
	throw Intern::MakeFormException();

	return 0;
}