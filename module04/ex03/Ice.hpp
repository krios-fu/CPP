/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/12 15:33:51 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice ( const Ice & obj );
virtual	~Ice();

		Ice & operator= ( const Ice & obj );

		AMateria*	clone () const;
		void		use( ICharacter& target );

};

#endif 