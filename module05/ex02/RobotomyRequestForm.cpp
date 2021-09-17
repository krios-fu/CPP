/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:57:06 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 22:49:44 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
	:	Form ("RobotomyRequestForm", 72, 45 ),
	_target( target ) {}

RobotomyRequestForm::RobotomyRequestForm ( RobotomyRequestForm const & other )
	:	Form( other ),
		_target( other._target ) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator= ( RobotomyRequestForm const & other )
{
	(void)other;
	 return (*this);
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute( executor );
	int ran = 0;

	std::cout << "* VRRRRRRRRRR ZZZZZZZZ VRRRRRRRRRRRR ZZZZZZZ *" << std::endl;
	srand( time(0) );
	ran = ( rand() % 100 );
	if ( ran > 50 )
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << this->_target << " ❌ failure" << std::endl;
}