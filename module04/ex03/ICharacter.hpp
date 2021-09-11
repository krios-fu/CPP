/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:42:58 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 17:16:51 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP

#include <string>

class AMateria;

class ICharacter
{
	public:
		ICharacter(){};

virtual std::string const &	getName() const = 0;
virtual void				equip( AMateria* m ) = 0;
virtual void				unequip( int idx ) = 0;
virtual void				use( int idx, ICharacter& target ) = 0;

};

#endif
