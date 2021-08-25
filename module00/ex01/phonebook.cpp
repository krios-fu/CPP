/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:18:15 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/25 20:07:20 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_pos = 0;
	this->_len = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::addContact(void)
{
	if (this->_pos == 8)
		this->_pos = 0;
	this->contact[this->_pos].setInfo();
	if (this->_len < 8)
		 this->_len++;
	this->_pos++;
}

int Phonebook::getLen( void ) const
{
	return (this->_len);
}

void Phonebook::print_contact(int pos)
{
	std::cout << this->contact[pos].get_fName() << std::endl;
	std::cout << this->contact[pos].get_lName() << std::endl;
	std::cout << this->contact[pos].get_nickName() << std::endl;
	std::cout << this->contact[pos].get_phone() << std::endl;
	std::cout << this->contact[pos].get_darkSecret() << std::endl;
}

void Phonebook::search_display(int len)
{
	int i;
	std::string index;
	i = 0;
	system("clear");
	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|*******************************************|" << std::endl;
	while (i < len)
	{
		std::cout << "|" << std::setw(10) << i;
		print_format(this->contact[i].get_fName());
		print_format(this->contact[i].get_lName());
		print_format(this->contact[i].get_nickName());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|*******************************************|" << std::endl;
	if (len > 0)
	{
		std::cout << "Search index: ";
		std::getline(std::cin, index);
		if (isdigit(index[0]))
		{
			if (atoi(&index[0]) < len)
				print_contact(atoi(&index[0]));
			else
				search_display(len);
		}
		else
			search_display(len);
	}
	std::cout << "press enter key to continue..." << "\n";
	std::getchar();
}

void Phonebook::print_format(std::string str)
{
	if (str.length() >= 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
}