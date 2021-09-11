/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:23:09 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 20:44:44 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria *_materia[4];
		std::string _name;
	public:
		Character();
		~Character();

		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );
		std::string const &	getName();
};

#endif