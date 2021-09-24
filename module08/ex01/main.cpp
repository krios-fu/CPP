/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:31:47 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/24 03:54:25 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main ()
{
	
	try
	{
		std:: cout << "************ sp ***********" << std::endl;

		span sp = span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(15);

		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "************ spRandom ***********" << std::endl;
		
		span spRandom( 100000 );
		std::vector<int>aux;
		for( int i = 0; i < 100000 ; i++ )
		{
			aux.push_back( i *=  2  );
		}
		spRandom.addNumber( aux.begin(), aux.end() );

		std::cout << "shortestSpan: " << spRandom.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << spRandom.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	return 0;
}