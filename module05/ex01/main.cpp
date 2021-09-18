/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:34:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/18 15:56:54 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat a("Kevin", 150);
	Bureaucrat b ("Julen", 1);

	Form f("1", 42, 21);

	try
	{
		std::cout << RED"************ Bureaucrat Form ************"WHITE << std::endl;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << RED"************ Test Form ************"WHITE << std::endl;
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
		std::cout << RED"************ Wrong Grade ************"WHITE << std::endl;
		std::cout << a << std::endl;
		a.signForm(f);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		try
		{
			std::cout << RED"************ Test Form ( Change grade )************"WHITE << std::endl;
			a.setGrade(12);
			std::cout << a << std::endl;
			std::cout << RED"************ Test Form ( Signed Exception )************"WHITE << std::endl;
			std::cout << f << std::endl;
			a.signForm(f);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			try
			{
				std::cout << RED"************ Test New Form************"WHITE << std::endl;
				Form k("2", 42, 21);
				std::cout << k << std::endl;
				a.signForm(k);
				std::cout << k << std::endl;
				std::cout << RED"************ Test Form ( Signed Exception )************"WHITE << std::endl;
				b.signForm(k);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
	}
	
	return 0;
}