/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:14:49 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/12 17:56:10 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat( const std::string &name , int grade );
		Bureaucrat( Bureaucrat const & other);
virtual	~Bureaucrat();

		Bureaucrat & operator= ( Bureaucrat const & other );

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw ();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw ();
	};

		int					getGrade()		const ;
		void 				setGrade( int grade );
		const std::string &	getName( void )	const;

		void incrementGrade( void );
		void decrementGrade( void );
		
};

std::ostream& operator << ( std::ostream &o, const Bureaucrat &obj );

#endif