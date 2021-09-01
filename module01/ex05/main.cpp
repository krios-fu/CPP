/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:32:19 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/01 18:08:52 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int argc, char *argv[])
{
	Karen karencilla;

	if (argc == 2)
	{
		karencilla.complain(argv[1]);
	}
	else
		std::cout << "Options levels: INFO, WARNING, DEBUG, ERROR" << std::endl;
	return (0);
}