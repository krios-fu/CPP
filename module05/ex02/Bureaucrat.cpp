/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:40:56 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 22:31:54 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("undefined"){}

Bureaucrat::Bureaucrat( const std::string &name, int grade )
	: _name( name ), _grade ( grade )
{
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat ( Bureaucrat const & other )
	: _name( other._name ) , _grade ( other._grade ) {}

Bureaucrat::~Bureaucrat(){}


const std::string & Bureaucrat::getName() const
{
	return this->_name;
}

void Bureaucrat::setGrade( int grade )
{
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

int Bureaucrat::getGrade() const 
{
	return this->_grade;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & other )
{
	this->_grade = other.getGrade();
	return  *this;
}

std::ostream& operator << ( std::ostream &o, const Bureaucrat &obj )
{
	o << obj.getName() << " bureaucrat grade " << obj.getGrade();
	return o;
}

void Bureaucrat::incrementGrade( void )
{
	int tmp;

	tmp = this->getGrade() - 1;
	
	if (tmp < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = tmp;
}

void Bureaucrat::decrementGrade( void  )
{
	int tmp;

	tmp = this->getGrade() + 1;
	
	if (tmp > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = tmp;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "❌ GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "❌ GradeTooLowException";
}

void Bureaucrat::signForm( Form & form )
{
	if ( form.getStatus() )
	{
		std::cout << *this << " cannot sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if ( form.getSignedGrade() < this->_grade )
	{
		std::cout << *this << " cannot sign " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signs " << form << std::endl;
	}
	form.beSigned(*this);
}

void Bureaucrat::executeForm ( Form const & form )
{
	try
	{
		form.execute( *this );
		std::cout << this->getName() << " executes " << form.getName();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}