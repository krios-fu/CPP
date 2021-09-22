/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:43:10 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/22 20:54:26 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class EasyFindExecption : public std::exception
{
	virtual const char* what() const throw () { return "❌ EasyFindExecption" ; }
};

template <typename T>

typename T::iterator easyFind(T &container ,  const  int & n)
{
	typename T::iterator iter = std::find ( container.begin(), container.end(), n);
	if (iter == container.end())
		throw ::EasyFindExecption();
	return iter;
};
#endif