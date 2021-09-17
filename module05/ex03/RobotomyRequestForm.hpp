/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:51:14 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 22:13:58 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTO_MY_REQUEST_FORM_HPP
# define ROBOTO_MY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <stdlib.h>
# include <time.h>

class RobotomyRequestForm : public Form
{
	private:
		std::string const _target;
	public:
		RobotomyRequestForm( std::string const target );
		RobotomyRequestForm( RobotomyRequestForm const & other );
		~RobotomyRequestForm();
		RobotomyRequestForm & operator= ( RobotomyRequestForm const & other );

		void execute( Bureaucrat const & executor ) const;
};

#endif