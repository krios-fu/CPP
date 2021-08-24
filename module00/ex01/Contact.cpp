/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:45:03 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/24 21:16:01 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{	
}

Contact::~Contact()
{
}

void Contact::setInfo()
{
	std::string data;
	std::cout << "First Name:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_fName(data);
	std::cout << "Last Name:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_lName(data);
	std::cout << "Nickname:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_nickName(data);
	std::cout << "Number Phone:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_phone(data);
	std::cout << "Dark Secret:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_darkSecret(data);
}

void Contact::set_fName(std::string f_name)
{

	this->f_name = f_name;
}

void Contact::set_lName(std::string l_name)
{

	this->l_name = l_name;
}

void Contact::set_nickName(std::string nickName)
{

	this->nickName = nickName;
}

void Contact::set_phone(std::string phone)
{

	this->phone = phone;
}

void Contact::set_darkSecret(std::string darkSecret)
{
	this->darkSecret = darkSecret;
}


/* GET */

std::string Contact::get_fName(void)
{
	return (this->f_name);
}

std::string Contact::get_lName(void)
{
	return (this->l_name);
}

std::string Contact::get_nickName(void)
{
	return (this->nickName);
}

std::string Contact::get_phone(void)
{
	return (this->phone);
}

std::string Contact::get_darkSecret(void)
{
	return (this->darkSecret);
}