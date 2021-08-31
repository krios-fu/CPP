/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:44:25 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 19:03:57 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
	Zombie *zombie[5];

	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|                 Stack Zombie              |" << std::endl;
	std::cout << "|*******************************************|" << std::endl;
	randomChump("ZombiCaracono");
	randomChump("ZombiSaltador de pértiga");
	randomChump("ZombiCaracubo");
	randomChump("ZombiLector");

	std::cout << std::endl;
	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|                 Heap Zombie               |" << std::endl;
	std::cout << "|*******************************************|" << std::endl;

	zombie[0] = newZombie("ZombiPortero");
	zombie[0]->announce();
	zombie[1] = newZombie("ZombiDeportista");
	zombie[1]->announce();
	zombie[2] = newZombie("ZombiBailón");
	zombie[2]->announce();
	zombie[3] = newZombie("ZombiPlayero");
	zombie[3]->announce();
	zombie[4] = newZombie("Zombictor");
	zombie[4]->announce();
	for (size_t i = 0; i < 5; i++)
		delete( zombie[i] );
}