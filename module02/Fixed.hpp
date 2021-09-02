/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:35:30 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/02 20:59:05 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int _raw;
		static const int  _bitFractional = 8;

	public:
		Fixed();
		Fixed (const Fixed &fixed);
		~Fixed();

		Fixed& operator = (const Fixed &fixed);

		void	setRawBits( int raw );
		int		getRawBits( void ) const;

};



#endif