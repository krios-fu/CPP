/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:35:30 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/04 18:18:22 by krios-fu         ###   ########.fr       */
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

		Fixed	operator++ ();
		Fixed	operator++ ( int i );

		Fixed	operator-- ();
		Fixed	operator-- ( int i );

		Fixed	operator+ ( const Fixed &obj);
		Fixed	operator- ( const Fixed &obj);

		Fixed	operator* ( const Fixed &obj);
		Fixed	operator/ ( const Fixed &obj);

		bool	operator>	( const Fixed &obj ) const;
		bool	operator<	( const Fixed &obj ) const;
		bool	operator>=	( const Fixed &obj ) const;
		bool	operator<=	( const Fixed &obj ) const;
		bool	operator==	( const Fixed &obj ) const;
		bool	operator!=	( const Fixed &obj ) const;


		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		int		toInt ( void ) const;
		float	toFloat ( void ) const;

		static Fixed	const &min ( Fixed const &a, Fixed const &b );
		static Fixed	const &max ( Fixed const &a, Fixed const &b );
		static Fixed	&min( Fixed &a, Fixed &b );
		static Fixed	&max( Fixed &a, Fixed &b );

};

std::ostream& operator << ( std::ostream &o, const Fixed &obj );

Fixed	const &min ( Fixed const &a, Fixed const &b );
Fixed	const &max ( Fixed const &a, Fixed const &b );

Fixed	&min ( Fixed &a, Fixed &b );
Fixed	&max ( Fixed &a, Fixed &b );

#endif
