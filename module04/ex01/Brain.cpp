/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:48:16 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 21:07:52 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout	<< "Brain default Constructor called" << std::endl;
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = "🤯";
}

Brain::Brain (const Brain & Brain)
{
	std::cout	<< "Brain Copy Constructor called" << std::endl;
	this->operator= ( Brain );
}

Brain::~Brain()
{
	std::cout	<< "Brain Destructor called" << std::endl;
}

Brain & Brain::operator= ( const Brain & Brain )
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = Brain.ideas[i];
	return *this;
}


/********** SET & GET **********/

