/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:49:33 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/07 15:57:51 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

# define WHO_AM_I 4

class DiamondTrap : public ScavTrap,  public FragTrap
{
	private:
		std::string _name_;
		DiamondTrap();
	public:
			DiamondTrap( std::string name );
			DiamondTrap( const DiamondTrap & obj );
virtual		~DiamondTrap();

	DiamondTrap & operator= ( const DiamondTrap & obj );

	void	attack( std::string const & target );
	void	whoAmI( void );
	std::string getName ( void );
};

#endif