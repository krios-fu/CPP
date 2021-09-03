/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:35:30 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/03 21:39:05 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <math.h>
#include <stdbool.h>

class Fixed
{
	private:

		static const int	_bitFractional = 8;
		int					_raw;
		
	public:

		Fixed();
		Fixed( const Fixed &fixed );
		Fixed( const float raw );
		Fixed( const int raw);

		~Fixed();

		Fixed&	operator =	( const Fixed &obj );
		Fixed&	operator ++ ();
		Fixed&	operator ++ ( int i );


		bool	operator >	( const Fixed &obj ) const;
		bool	operator <	( const Fixed &obj ) const;
		bool	operator >=	( const Fixed &obj ) const;
		bool	operator <=	( const Fixed &obj ) const;
		bool	operator ==	( const Fixed &obj ) const;
		bool	operator !=	( const Fixed &obj ) const;


		void	setRawBits( float raw );
		int		getRawBits( void ) const;

		int		toInt ( void ) const;
		float	toFloat ( void ) const;

};

std::ostream& operator << ( std::ostream &o, const Fixed &obj );

#endif
