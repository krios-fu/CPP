/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:19:34 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 22:25:38 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const target)
	:	Form ("PresidentialPardonForm", 25, 5),
		_target( target ) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & other )
	:	Form( other ),
		_target ( other._target ) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator= ( PresidentialPardonForm const & other )
{
	(void)other;
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const 
{
	Form::execute( executor );

	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.";
}