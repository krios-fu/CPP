/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:07:18 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/21 18:22:06 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{

	std::cout << "*********** Int ************" << std::endl;
	int a[] = { 0 , 1, 2, 3 ,4 , 5,  6 , 7, 8, 9};
	::iter( a , 10 , plus42<int>);

	std::cout << "*********** FLoat ************" << std::endl;
	float  b[] = { 0.0 , 1.1, 2.2, 3.3 ,4.4 , 5.5,  6.6 , 7.7, 8.8, 9.9};
	::iter( b, 10, plus42<float>);

	return 0;
}