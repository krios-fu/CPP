/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:12:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/22 21:12:27 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <string>

int main ( int argc, char *argv[] )
{
	if (argc == 2)
	{
		try
		{
			
				std:: cout << "************ Vector ***********" << std::endl;
				std::vector<int> vArray;
				vArray.push_back( 1 );
				vArray.push_back( 2 );
				vArray.push_back( 3 );
				vArray.push_back( 4 );
				vArray.push_back( 7 );

				try 
				{
					std::vector<int>::iterator iterV = easyFind( vArray, static_cast <int> ( stoi(static_cast<std::string> ( argv[1] ) ) ) );
					std::cout << *iterV << std::endl;
				}
				catch( std::invalid_argument& )
				{
					std::cerr << "String " << "impossible conversion" << std::endl;
				}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std:: cout << "************* List ************" << std::endl;
			std::list<int> lArray;
			lArray.push_back( 7 );
			lArray.push_back( 42 );
			lArray.push_back( 21 );
			lArray.push_back( 32 );
			lArray.push_back( 12 );
			try 
			{
				std::list<int>::iterator iterL = easyFind( lArray, static_cast <int> ( stoi( static_cast<std::string> ( argv[1] ) ) ) );
				std::cout << *iterL << std::endl;
			}
			catch( std::invalid_argument& )
			{
				std::cerr << "String " << "impossible conversion" << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}