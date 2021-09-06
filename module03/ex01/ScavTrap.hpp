/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:49:13 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/06 22:47:27 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

# define GATE_KEEPER_MODE 3

class ScavTrap : public ClapTrap
{
	private:
		bool _gate;
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap & obj );
		~ScavTrap();

		ScavTrap& operator= ( const ScavTrap & scavTrap );

		void	attack( std::string const & target );
		void	guardGate( void );
		bool	getGate( void ) const ;
};

#endif
