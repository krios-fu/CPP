/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:45:03 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/09 16:36:18 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{	
}

Contact::~Contact()
{
}

void Contact::set_fName(void)
{
	std::string data;

	std::cout << "First Name:" << std::endl << ">> ";
	std::getline(std::cin, data);
	f_name = data;
}

void Contact::set_lName(void)
{
	std::string data;

	std::cout << "Last Name:" << std::endl << ">> ";
	std::getline(std::cin, data);
	l_name = data;
}

void Contact::set_nickName(void)
{
	std::string data;

	std::cout << "Nickname:" << std::endl << ">> ";
	std::getline(std::cin, data);
	nickName = data;
}

void Contact::set_phone(void)
{
	std::string data;

	std::cout << "Number Phone:" << std::endl << ">> ";
	std::getline(std::cin, data);
	phone = data;
}

void Contact::set_darkSecret(void)
{
	std::string data;

	std::cout << "Dark Secret:" << std::endl << ">> ";
	std::getline(std::cin, data);
	darkSecret = data;
}


/* GET */

std::string Contact::get_fName(void)
{
	return (f_name);
}

std::string Contact::get_lName(void)
{
	return (l_name);
}

std::string Contact::get_nickName(void)
{
	return (nickName);
}

std::string Contact::get_phone(void)
{
	return (phone);
}

std::string Contact::get_darkSecret(void)
{
	return (darkSecret);
}