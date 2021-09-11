/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:23:09 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 22:52:41 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
	private:
		AMateria *_materia[4];
		size_t amount;
		std::string _name;
	public:
		Character();
		Character( const Character & obj );
		Character(std::string name);
virtual	~Character();

		Character & operator= ( const Character & obj );
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );
		std::string const & getName() const ;
};

#endif