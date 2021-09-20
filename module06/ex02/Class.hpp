/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:00:04 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/20 20:29:26 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

# include <stdlib.h>
# include <time.h>

class Base
{
	public:
		virtual	~Base() {};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate( void );
void identify( Base *p );

#endif