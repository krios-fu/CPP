/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:23:57 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/01 00:57:06 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"
# include "iostream"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB();
		HumanB( std::string name );
		~HumanB();

		void		setType( std::string name );
		void		setWeapon( Weapon &weapon );
		void		attack( void );
		std::string	getType( void ) const;
};

#endif
