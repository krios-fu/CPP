/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 01:31:48 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/01 03:17:32 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <iostream>
# include <fstream>
# include <sstream>

int check_argv(std::string nameFile, std::string s1, std::string s2)
{
	std::ifstream file;
	std::ofstream output;
	std::string line;
	std::string tmp;

	file.open(nameFile);
	if (!file.is_open())
		return (1);
	output.open(nameFile + ".replace" , std::ios::trunc);
	if (!output.is_open())
		return (1);
	if (s1.length() == 0 || s2.length() == 0)
		return (1);
	while (std::getline(file, line))
	{
		for (size_t i = 0; i < line.length(); i++)
		{
			tmp = &line[i];
			tmp = tmp.substr(0, s1.length());
			if (!tmp.find(s1))
			{
				output << s2;
				// if (s1.length() == 1)
					// i += s1.length() - 1;
				// else
					i += s1.length();
			}
			else
				output << line[i];
		}
		if (!file.eof())
			output << '\n';
	}
	file.close();
	output.close();
	return (0);
}

int main (int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Erro: Bad number arguments" << std::endl;
		return (0);	
	}
	if (check_argv(argv[1], argv[2], argv[3]))
	{
		std::cout << "Erro: read arguments" << std::endl;
		return (0);
	}
	return (0);
}