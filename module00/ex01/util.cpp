/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 04:32:50 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/08 04:42:37 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int menu(std::string line)
{
	
	if(!line.compare("ADD"))
		return (1);
	else if(!line.compare("SEARCH"))
		return (2);
	return (0);
}

void addContact(Contact &contact)
{
	contact.set_fName();
	contact.set_lName();
	contact.set_nickName();
	contact.set_phone();
	contact.set_darkSecret();
}

void print_contact(Contact contact)
{
	std::cout << contact.get_fName() << std::endl;
	std::cout << contact.get_lName() << std::endl;
	std::cout << contact.get_nickName() << std::endl;
	std::cout << contact.get_phone() << std::endl;
	std::cout << contact.get_darkSecret() << std::endl;
}

void search_display(Contact *contacts, int len)
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
		print_format(contacts[i].get_fName());
		print_format(contacts[i].get_lName());
		print_format(contacts[i].get_nickName());
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
				print_contact(contacts[atoi(&index[0])]);
			else
				search_display(contacts, len);
		}
		else
			search_display(contacts, len);
	}
	std::cout << "press enter key to continue...";
	std::getchar();
}

void print_format(std::string str)
{
	if (str.length() >= 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << str;
}