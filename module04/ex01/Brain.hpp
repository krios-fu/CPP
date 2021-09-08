/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:44:18 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 21:08:30 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas [ 100 ];
	public:
		Brain();
		Brain ( const Brain & Brain );
		Brain ( const Brain & Brain );
virtual	~Brain();

		Brain& operator= ( const Brain & Brain );
};




#endif
