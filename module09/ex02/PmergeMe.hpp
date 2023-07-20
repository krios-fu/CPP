#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <chrono>
#include <iostream>
#include <sstream>

namespace ft
{
	class PmergeMe
	{
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;
		double time_vec;
		double time_list;

	public:
		PmergeMe(int argc, char** argv);
		// PmergeMe(const PmergeMe &_copy);
		virtual ~PmergeMe(void);
		// PmergeMe &operator=(const PmergeMe &_copy);

		const std::vector<int> &getVector(void) const;
		const std::deque<int> &getDeque(void) const;

		std::vector<int> &setVector(void);
		std::deque<int> &setDeque(void);
	};
};
