/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:34:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/17 20:42:52 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

int	main()
{
	Form *shrubbery= new ShrubberyCreationForm("home");

	try
	{
		Bureaucrat supervisor( "lol", 1 );
		shrubbery->beSigned( supervisor );
		shrubbery->execute( supervisor );
		std::cout << *shrubbery;
	}
	catch( const std::exception& e )
	{
		std::cerr << e.what() << '\n';
	}
	
	delete shrubbery;
}