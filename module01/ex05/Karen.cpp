/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:48:34 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/01 18:32:47 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

void Karen::complain( std::string level)
{
	std::string lvl[] = 
	{ 
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	void (Karen:: *fPtr [4])(void) = 
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (size_t i = 0; i < 4; i++)
		if(lvl[i] == level)
			(this->*fPtr[i])();
}

void Karen::debug ( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \nI just love it!" << std::endl;
}

void Karen::info ( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. \nYou don’t put enough! If you did I would not have to ask for it!"<< std::endl;
}

void Karen::warning ( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error ( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}