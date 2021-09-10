/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/10 18:03:02 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice(/* args */);
		~Ice();

		void		use( ICharacter& target );
		AMateria*	clone () const = 0;
};

#endif 