/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:13 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/08 18:03:38 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"


class WrongDog : public WrongAnimal
{
	private:

	public:
		WrongDog();
		WrongDog(const WrongDog & obj);
virtual	~WrongDog();

		WrongDog & operator= (const WrongDog & wrong_dog);

		void makeSound () const;
};

#endif