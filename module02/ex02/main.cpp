/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:03:21 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/03 21:42:23 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{ 
	Fixed a;

	int lol = 12;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// a++;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << lol << std::endl;
	std::cout << ++lol << std::endl;
	std::cout << lol << std::endl;
	std::cout << lol++ << std::endl;
	std::cout << lol << std::endl;

	// float a  = 12.5;
	// std::cout << ++a ;
	
}