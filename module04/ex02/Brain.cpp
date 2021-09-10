/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:48:16 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/09 15:13:41 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout	<< "Brain default Constructor called" << std::endl;
	for(size_t i = 0; i < 100; i++)
		this->ideas[i] = "🤯";
}

Brain::Brain (const Brain & obj)
{
	std::cout	<< "Brain Copy Constructor called" << std::endl;
	this->operator= ( obj );
}

Brain::~Brain()
{
	std::cout	<< "Brain Destructor called" << std::endl;
}

Brain & Brain::operator= ( const Brain & obj )
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return *this;
}


/********** SET & GET **********/

