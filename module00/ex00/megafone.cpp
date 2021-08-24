/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megafone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:59:13 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/24 21:22:14 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale>

void megaphone(std::string str)
{
	for(size_t i = 0; i < str.length(); i++)
		std::cout << (char)std::toupper(str[i]);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		for (int i = 1; i < argc; i++)
			megaphone(argv[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}