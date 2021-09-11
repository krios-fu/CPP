/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:23:43 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/11 22:08:05 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		size_t amount;
		AMateria * _materia_source[ 4 ];
	public:
		MateriaSource();
		MateriaSource ( const MateriaSource & obj );
virtual	~MateriaSource();
		
	MateriaSource & operator= ( const MateriaSource & obj );
	void		learnMateria( AMateria* new_materia );
	AMateria*	createMateria( std::string const & type );

};

#endif