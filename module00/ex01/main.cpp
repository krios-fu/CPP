/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 00:05:35 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/24 21:12:23 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static void	header(void)
{
	std::cout << " _____ _               _____         _   " << std::endl;
	std::cout << "|  _  | |_ ___ ___ ___| __  |___ ___| |_ " << std::endl;
	std::cout << "|   __|   | . |   | -_| __ -| . | . | '_|" << std::endl;
	std::cout << "|__|  |_|_|___|_|_|___|_____|___|___|_,_|" << std::endl;
	std::cout << "ADD, SEARCH, EXIT" << std::endl << std::endl;
}

int menu(std::string line)
{
	
	if(!line.compare("ADD"))
		return (1);
	else if(!line.compare("SEARCH"))
		return (2);
	return (0);
}

int main (void)
{
	std::string line;
	Phonebook phonebook;
	int	opc, len;

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
				phonebook.addContact();
				system("clear");
				if (len < 8)
					len++;
				break;
			case 2:
				phonebook.search_display(len);
				break;
			default:
				break;
		}
	}
	while (line.compare("EXIT"));
	return (0);
}