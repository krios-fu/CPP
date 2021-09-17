/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:53:51 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/18 00:18:57 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form* makeShrubbery( std::string const & target);
		Form* makeRoboto( std::string const & target);
		Form* makePresidential( std::string const & target);

	public:
		Intern();
		Intern( Intern const & other );
virtual	~Intern();

		class MakeFormException : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

		Intern & operator= ( Intern const & other );

		Form*  makeForm( std::string const & name_form, std::string const & target_name );
};

#endif