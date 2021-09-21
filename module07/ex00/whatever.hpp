/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:08:34 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/21 17:30:04 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
 #define WHATEVER_HPP


#include <iostream>

template <typename T>

void	swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template <typename T>

T min(T a, T b)
{
	if (a >= b)
		return b;
	else 
		return a;
}

template <typename T>

T max(T a, T b)
{
	if (a <= b)
		return b;
	else 
		return a;
}

#endif