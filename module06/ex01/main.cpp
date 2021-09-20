/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:06:23 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/20 19:56:37 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct	Data
{
	int a;
}				Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data *>(raw);
}

int main ( void )
{
	Data data, *data_b;

	data.a=42;
	
	uintptr_t _serialize = serialize( &data );

	data_b = deserialize( _serialize );

	std::cout << data_b->a << std::endl;
	std::cout << data_b << std::endl;
	std::cout << &data << std::endl;

	return 0;
}