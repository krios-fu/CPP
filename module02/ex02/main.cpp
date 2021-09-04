/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:03:21 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/04 17:44:46 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed a (0);
	Fixed b (21);

	// Fixed b = a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	
	// std::cout << a		<< std::endl;
	// std::cout << ++a	<< std::endl;
	// std::cout << a		<< std::endl;
	// std::cout << a++	<< std::endl;
	// std::cout << a		<< std::endl;

	// std::cout <<  b			<< std::endl;
	// std::cout <<  (a + b)	<< std::endl;
	// std::cout <<  (a - b)	<< std::endl;
	// std::cout <<  (a * b)	<< std::endl;
	// std::cout <<  (a / b)	<< std::endl;
	
	std::cout << std::endl;
	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|              Operations table             |" << std::endl;
	std::cout << "|*******************************************|\n" << std::endl;
	std::cout << " a > b:		"	<<  (a > b)	 << std::endl;
	std::cout << " a < b:		"	<<  (a < b)	 << std::endl;
	std::cout << " a == b:	"	<<  (a == b) << std::endl;
	std::cout << " a != b:	"	<<  (a != b) << std::endl;
	std::cout << " a >= b:	"	<<  (a >= b) << std::endl;
	std::cout << " a <= b:	"	<<  (a <= b) << std::endl;
	std::cout << " max:		" << Fixed::max( a, b ) << std::endl;
	std::cout << " min:		" << Fixed::min( a, b ) << std::endl;
	std::cout << "|*******************************************|" << std::endl;

	return 0;
}
