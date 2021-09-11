/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:19:06 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 20:38:07 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
# define I_MATERIA_SOURCE_HPP

#include <string>

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		~IMateriaSource(){};
		
virtual void		learnMateria( AMateria* ) = 0;
virtual AMateria*	createMateria( std::string const & type ) = 0;
};

#endif 