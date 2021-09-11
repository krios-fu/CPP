/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:37:32 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 23:23:03 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <string>
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	private:
		AMateria();
	protected:
		std::string _type;
	public:
		AMateria( std::string const &type );
		AMateria( const AMateria & obj );
virtual ~AMateria();
		AMateria& operator = (const AMateria & obj );

		std::string const & getType() const;
virtual	void				use( ICharacter& target ) = 0;
virtual AMateria*			clone () const = 0;

};

#endif