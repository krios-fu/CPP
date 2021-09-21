/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:01:03 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/21 18:21:41 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>

void iter( T *array, size_t len, void ( *f )( T const &a ) )
{
	for (size_t i = 0; i < len ; i++)
		(*f)(array[i]);
}

template <typename T>
void plus42(T const  &a)
{
	 std::cout << "Original = " << a << " Plus 42 = " << a + 42 << std::endl;
}

#endif