/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:33:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/20 18:20:45 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Conversion.hpp"

int main ( int argc, char *argv[] ) 
{
	if ( argc == 2)
	{
		Conversion _42( static_cast< const std::string > (argv[1]) );
		_42.displayTypes();
	}
	else
		std::cout << "Bad arguments " << std::endl ;
	return 0;
}