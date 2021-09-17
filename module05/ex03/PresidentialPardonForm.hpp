/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:15:51 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/18 00:15:28 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const _target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm( std::string const target );
		PresidentialPardonForm( PresidentialPardonForm const & other );
virtual	~PresidentialPardonForm();

		PresidentialPardonForm & operator= ( PresidentialPardonForm const & other );

		void execute( Bureaucrat const & executor ) const;
};

#endif 