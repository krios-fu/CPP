/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:35:30 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/03 16:21:03 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:

		static const int	_bitFractional = 8;
		int					_raw;

	public:

		Fixed();
		Fixed( const Fixed &fixed );
		~Fixed();

		Fixed&	operator = (const Fixed &fixed );

		void	setRawBits( int raw );
		int		getRawBits( void ) const;

};

#endif
