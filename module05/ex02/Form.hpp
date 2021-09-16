/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:44:33 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/16 20:30:59 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP


# include <string>
# include <exception>
# include <ostream>
# include "Bureaucrat.hpp"

# define RED	"\033[1;31m"
# define WHITE	"\033[0;37m"

class Form
{
	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_execute_grade;
		bool				_status;
		Form();
	public:
		Form( const Form & other );
		Form( const std::string name, const int sign_grade, const int execute_grade );
		~Form();

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
		void 				execute(Bureaucrat const &obj ) const;

		const std::string&	getName()			const;
		int					getSignedGrade()	const;
		int					getExecuteGrade()	const;
		bool				getStatus()			const;
		
};

		std::ostream & operator<< ( std::ostream & o, const Form  & obj );

#endif
