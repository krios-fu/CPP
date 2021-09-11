/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:26:29 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/10 18:03:02 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(/* args */);
		Cure( const Cure & obj );
		~Cure();

		Cure & operator= ( const Cure & obj );

		void		use( ICharacter& target );
		AMateria*	clone () const;
};

#endif 