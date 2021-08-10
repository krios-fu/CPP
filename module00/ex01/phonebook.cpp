/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:05:35 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/09 16:34:50 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	header(void)
{
	std::cout << " _____ _               _____         _   " << std::endl;
	std::cout << "|  _  | |_ ___ ___ ___| __  |___ ___| |_ " << std::endl;
	std::cout << "|   __|   | . |   | -_| __ -| . | . | '_|" << std::endl;
	std::cout << "|__|  |_|_|___|_|_|___|_____|___|___|_,_|" << std::endl;
	std::cout << "ADD, SEARCH, EXIT" << std::endl << std::endl;
}

int main (void)
{
	std::string line;
	Contact contacts[8];
	int	i, opc, len;

	i = 0;
	opc = 0;
	len = 0;

	do
	{
		system("clear");
		header();
		std::cout << "> ";
		getline(std::cin, line);
		opc = menu(line);
		switch (opc)
		{
			case 1:
				system("clear");
				header();
				addContact(contacts[i]);
				system("clear");
				i++;
				if (len < 8)
					len = i;
				if (i == 8)
					i = 0;
				break;
			case 2:
				search_display(contacts, len);
				break;
			default:
				break;
		}
	}
	while (line.compare("EXIT"));
	return (0);
}