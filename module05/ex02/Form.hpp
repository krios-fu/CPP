/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:44:33 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 20:33:55 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP


# include <string>
# include <exception>
# include <ostream>

# include "Bureaucrat.hpp"
class Bureaucrat;

# define RED	"\033[1;31m"
# define WHITE	"\033[0;37m"

class Form
{
	protected: 
	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_execute_grade;
		bool				_status;
		Form();
	public:
		Form( const Form & other );
		Form( const std::string name, const int sign_grade, const int execute_grade );
virtual	~Form();

		Form& operator=( const Form & other );

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

		class SignedException : public std::exception
		{
			public:
				virtual const char *what() const throw ();
		};

		class UnsinedException : public std::exception
		{
			public:
				virtual const char *what() const throw ();
		};

		void				beSigned( const Bureaucrat & obj );
virtual	void				execute( Bureaucrat const & executor ) const = 0;

		const std::string&	getName()			const;
		int					getSignedGrade()	const;
		int					getExecuteGrade()	const;
		bool				getStatus()			const;
		
};

		std::ostream & operator<< ( std::ostream & o, const Form  & obj );

#endif
