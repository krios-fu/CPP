/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 01:48:48 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/24 03:56:23 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>


template <typename T>
class mutantstack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		mutantstack() : std::stack<T>(){};
		mutantstack( const mutantstack<T> & other ) : std::stack<T>(other) {};
virtual	~mutantstack(){};

	mutantstack & operator=( const mutantstack<T> & other )
	{
		if ( *this == &other)
			return *this;
		std::stack<T>::operator=(other);
		return *this;
	};

	iterator	begin()
	{
		return this->c.begin();
	};

	iterator	end()
	{
		return this->c.end();
	};
	
	const_iterator	begin()	const
	{
		return this->c.begin();
	};

	const_iterator	end()	const
	{
		return this->c.end();
	};

	reverse_iterator	rbegin()
	{
		return this->c.rbegin();
	};
	
	reverse_iterator	rend()
	{
		return this->c.rend();
	};

	const_reverse_iterator	rbegin()	const
	{
		return this->c.rbegin();
	};
	
	const_reverse_iterator	rend()		const
	{
		return this->c.rend();
	};
};

#endif