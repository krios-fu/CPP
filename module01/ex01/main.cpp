/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:44:25 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 20:32:35 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
	int n;

	n = 5;
	Zombie *zHorbe = zombieHorde( n, "lol" );
	if (!zHorbe)
	{
		std::cout << "Fail allocated" << std::endl;
		return EXIT_FAILURE ;
	}
	for (int i = 0; i < n; i++)
	{
		zHorbe[i].announce();
	}
	delete []zHorbe;
	return EXIT_SUCCESS ;
}