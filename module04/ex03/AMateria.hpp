/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:37:32 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/10 17:10:38 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		~AMateria();

		std::string const & getType () const;

virtual void		use( ICharacter& target );
virtual AMateria*	clone () const = 0;
};

#endif