/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:44:09 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/14 21:48:48 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	:	_name("undefine"),
		_execute_grade( 50 ),
		_sign_grade( 50 ),
		_status( 0 ) {}

Form::Form ( const Form & other )
	:	_name( other._name ),
		_sign_grade( other._sign_grade ),
		_execute_grade( other._execute_grade ),
		_status( other._status ) {}

Form::Form ( const std::string name, const int sign_grade, const int execute_grade)
	:	_name ( name ),
		_sign_grade( sign_grade ),
		_execute_grade( execute_grade ),
		_status ( 0 ) {}

Form::~Form() {}


Form & Form::operator= ( const Form & other )
{
	this->_status = other._status;

	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "❌ Form GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "❌ GradeTooHigthException";
}

const std::string& Form::getName() const 
{
	return this->_name;
}

int Form::getSignedGrade() const
{
	return this->_sign_grade;
}

int Form::getExecuteGrade() const 
{
	return this->_execute_grade;
}

bool Form::getStatus() const 
{
	return this->_status;
}

std::ostream & operator << ( std::ostream & o, const Form & obj )
{
	o	<< "Form " << obj.getName()
		<< " Signed grade " << obj.getSignedGrade()
		<< " Execute grade " << obj.getExecuteGrade()
		<< " Status " << obj.getStatus();
	return o ;
}

