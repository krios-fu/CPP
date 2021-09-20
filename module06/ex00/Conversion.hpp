/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:03:12 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/20 18:22:23 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

# include <string>
# include <iostream>
# include <math.h>

class Conversion
{
	private:
		std::string const _string;
		Conversion();
		void displayInt( void );
		void displayChar( void );
		void displayFloat( void );
		void displayDouble( void );

	public:
		Conversion( const std::string & str );
		Conversion( const Conversion & other );
		~Conversion();
		Conversion & operator= ( Conversion const & other );

		void displayTypes( void ) ;
		const std::string & getString( void ) const ;
};

#endif