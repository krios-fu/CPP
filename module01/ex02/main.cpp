/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:21:38 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 21:45:13 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main ( void )
{

	std::string str= "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "This is the address in memory of str "		<< &str 		<< std::endl;
	std::cout << "This is the address in memory of stringPTR "	<< stringPTR	<< std::endl;
	std::cout << "This is the address in memory of stringREF "	<< &stringREF	<< std::endl	<< std::endl;

	std::cout << "This is messages stringPTR " << *stringPTR	<< std::endl;
	std::cout << "This is messages stringREF " << stringREF		<< std::endl;

	return( 0 );
}