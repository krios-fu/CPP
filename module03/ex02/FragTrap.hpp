/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 22:54:52 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/07 16:20:37 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H


# include "ClapTrap.hpp"

# define GIVE_ME_FIVES 3

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		FragTrap();
		FragTrap ( const FragTrap & obj );
		FragTrap( std::string name );
virtual	~FragTrap();

		FragTrap & operator= (const FragTrap & fragTrap) ;

		void	attack( std::string const & target );
		void	highFivesGuys( void );
};


#endif