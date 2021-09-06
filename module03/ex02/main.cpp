/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:06:41 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/06 23:41:06 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void print_game(FragTrap *robot[2], int id_atack, int id_take_d)
{
		system("clear");
		std::cout << "|**********************************************|" << std::endl;
		std::cout << "|                  ScavTrap GAME               |" << std::endl;
		std::cout << "|**********************************************|\n" << std::endl;
		std::cout << WHITE"1. Attack   2. Be repaired  3. Give fives \n" << std::endl;
		std::cout <<  GREEN << robot[id_atack]->getName() << "\t" << robot[id_atack]->getHitPoints();
		std::cout <<  "\t" RED << robot[id_take_d]->getName() << "\t" << robot[id_take_d]->getHitPoints()
			<< WHITE "\n" << std::endl;
		std::cout <<  GREEN << "Energy points: "<< robot[id_atack]->getEnergyPoints() << WHITE" > ";
}


int main ( void )
{
	FragTrap *robot[2];
	std::string line;

	FragTrap a( "Wall-e" );
	FragTrap b( "Eva" 	);
	int opc = 0;

	int id_atack = 0;
	int id_take_d = 1;
	robot[0] = &a;
	robot[1] = &b;
	getchar();
	do
	{
		print_game(robot, id_atack, id_take_d);
		getline(std::cin, line);
		opc = atoi( line.c_str() );
		switch (opc)
		{
			case ERROR:
					 std::cout << robot[id_atack]->getName() << " Have lose a turn 😔" << std::endl;
				break ;
			case ATTACK :
				robot[id_atack]->attack( robot[id_take_d]->getName() );
				robot[id_take_d]->takeDamage( robot[id_atack]->getAttackDamage() );
				break;
			case BE_REPAIRED :
				robot[id_atack]->beRepaired( 15 );
				break;
			case  GIVE_ME_FIVES :
				robot[id_atack]->highFivesGuys();
				break;
			default:
				break;
		}
		id_atack = ( id_atack == 0 ) ? 1 : 0;
		id_take_d = ( id_atack == 1 ) ? 0 : 1;
		getchar();
	} while ( a.getHitPoints() > 0 && b.getHitPoints() > 0 );

	print_game(robot, id_take_d, id_atack);
	if (a.getHitPoints() > 0 )
		std::cout << "🏆 Win " << a.getName() << std::endl;
	else
		std::cout << "🏆 Win " << b.getName() << std::endl;
	return 0;
}