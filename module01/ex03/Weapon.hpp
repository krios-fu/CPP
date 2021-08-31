/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:54:17 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/31 22:57:01 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(/* args */);
		Weapon(std::string type);
		~Weapon();
	
		std::string getType( void ) const;
		void setType(std::string type);
};

#endif