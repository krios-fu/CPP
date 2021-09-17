/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:34:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/18 00:29:25 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern *becario = new Intern();
	
	Form *shrubbery = becario->makeForm( "Shrubbery Creation", "lol1" );
	Form *roboto = becario->makeForm( "Robotomy Request", "lol2" );
	Form *presi = becario->makeForm( "Presidential Pardon", "lol3 " );

	try
	{
		std::cout << RED"************ ShrubberyCreationForm ************"WHITE << std::endl;
		Bureaucrat supervisor( "lol", 1 );
		shrubbery->beSigned( supervisor );
		shrubbery->execute( supervisor );
		std::cout << *shrubbery << std::endl;
	}
	catch( const std::exception& e )
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << RED"************ RobotomyRequestForm ************"WHITE << std::endl;
		Bureaucrat n ( "Nlol", 1 );
		roboto->beSigned( n );
		roboto->execute( n );
		std::cout << *roboto << std::endl;
	}
	catch( const std::exception& e )
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << RED"************ PresidentialPardonForm ************"WHITE << std::endl;
		Bureaucrat  k ( "Klol", 1);
		presi->beSigned( k );
		presi->execute( k );
		std::cout << "\n" << *presi << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << RED"************ ExecuteForm ************"WHITE << std::endl;
		Bureaucrat  l ( "Klol", 50);
		l.executeForm( *presi );
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << RED"************ MakeForm ************"WHITE << std::endl;
		Form *wrongPresi = becario->makeForm( "Presidential Pardon", "lol3" );
		std::cout << *wrongPresi << std::endl;
		delete wrongPresi;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete shrubbery;
	delete roboto;
	delete presi;

	return 0;
}