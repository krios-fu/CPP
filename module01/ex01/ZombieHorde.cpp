/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:27:35 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 21:21:03 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zHorde;
	std::string tmp;

	if (N > 0)
	{
		zHorde = new Zombie[N];
		if (!zHorde)
			return (NULL);
		for (int i = 0; i < N; i++)
		{
			if (i > 0)
				tmp = name + std::to_string( i + 1 );
			else
				tmp = name;
			zHorde[i].setName( tmp );
		}
		return(zHorde);
	}
	return (NULL);
}