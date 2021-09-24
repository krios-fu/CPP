/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 02:15:30 by krios-fu          #+#    #+#             */
/*   Updated: 2021/09/24 03:57:14 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"
# include <iostream>
# include <list>

int main()
{

std::cout << "************ mutantstack ***********" << std::endl;
	mutantstack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << "Size: " << mstack.size() << std::endl;

	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Display stack" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "Display Reverse stack" << std::endl;
	
	mutantstack<int>::reverse_iterator rit = mstack.rbegin();
	mutantstack<int>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "*************** list **************" << std::endl;
	
	std::list<int> lisa;
	lisa.push_back(5);
	lisa.push_back(17);
	std::cout << lisa.back() << std::endl;
	lisa.pop_back();
	std::cout << "Size: " << lisa.size() << std::endl;
	lisa.push_back(3);
	lisa.push_back(5);
	lisa.push_back(737);
	//[...]
	lisa.push_back(0);
	std::cout << "Size: " << lisa.size() << std::endl;

	std::list<int>::iterator lit = lisa.begin();
	std::list<int>::iterator lite = lisa.end();
	++lit;
	--lit;
	std::cout << "Display list" << std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> s2(lisa);

	std::cout << "Display Reverse list" << std::endl;
	
	std::list<int>::reverse_iterator rlit = lisa.rbegin();
	std::list<int>::reverse_iterator rlite = lisa.rend();
	++rlit;
	--rlit;
	while (rlit != rlite)
	{
		std::cout << *rlit << std::endl;
		++rlit;
	}
	
	return 0;
}