/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:15:00 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 19:27:56 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie();

		void	announce( void ) const ;
		void	setName (std::string name);
};

		Zombie*	newZombie( std::string name );
		Zombie* zombieHorde( int N, std::string name );

#endif