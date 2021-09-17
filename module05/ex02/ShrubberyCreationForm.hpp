/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:53:37 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 20:34:29 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

# include <string>
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string const			_target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string traget);
		ShrubberyCreationForm ( const ShrubberyCreationForm & other );
virtual	~ShrubberyCreationForm();

		class FileOpenExeption
		{
			public:
			virtual const char* what() const throw ();
		};

		class FileWriteExeption
		{
			public:
			virtual const char* what() const throw ();
		};

		ShrubberyCreationForm & operator= ( const ShrubberyCreationForm & other );

	void execute(Bureaucrat const & executor) const;
};

#endif 