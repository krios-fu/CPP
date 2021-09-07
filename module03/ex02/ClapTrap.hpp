/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:12:45 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/07 16:19:46 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

# define YELLOW	"\033[1;33m"
# define GREEN	"\033[1;32m"
# define BLUE	"\033[1;34m"
# define PINK	"\033[1;35m"
# define GRAY	"\033[1;30m"
# define CYAN	"\033[1;36m"
# define RED	"\033[1;31m"
# define WHITE	"\033[0;37m"

# define ERROR 0
# define ATTACK 1
# define BE_REPAIRED 2

class ClapTrap
{
	protected:
	
		std::string _name;

		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;

	public:

		ClapTrap();
		ClapTrap( std::string const & name );
		ClapTrap( const ClapTrap &  clapTrap );
virtual ~ClapTrap();

		ClapTrap & operator= ( const ClapTrap &  clapTrap );

virtual	void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );


		std::string		getName( void ) const ;
		unsigned int	getEnergyPoints( void ) const ;
		unsigned int	getAttackDamage( void  ) const ;
		unsigned int	getHitPoints( void  ) const ;

		void			setName( std::string name);
		void			setEnergyPoints( unsigned int energy_points);
		void			setAttackDamage( unsigned int attack_damage );
		void			setHitPoints( unsigned int energy_points );
};

#endif
