/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:59:30 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/20 22:15:31 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"
#include <iostream>

Base *generate( void )
{
	int ran;
	Base *gen;

	gen = 0;
	srand( time(0) );
	ran = ( rand() % 3 );

	switch (ran)
	{
	case 0:
		gen = new A();
		std::cout << "New : A" << std::endl ;
		break;
	case 1:
		gen = new B();
		std::cout << "New : B" << std::endl ;
		break;
	case 2:
		gen = new C();
		std::cout << "New : C" << std::endl ;
		break;
	default:
		break;
	}
	return gen;
}

void identify(Base *p)
{

	if ( dynamic_cast<A *>(p) )
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B *>(p) )
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C *>(p) )
		std::cout << "C" << std::endl;

}

int main ()
{
	Base *k = generate();
	identify( k );
	delete k;
}