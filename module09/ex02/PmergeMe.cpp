#include "PmergeMe.hpp"

ft::PmergeMe::PmergeMe(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        std::istringstream stream(argv[i]);
        std::string token;
        while (std::getline(stream, token, ' '))
        {
            if (!token[0])
                continue;

            for (int i = 0; i < token.length(); i++)
            {
                if (isdigit(token[i]))
                    continue;
                else
                    throw std::runtime_error("Syntax " + token);
            }
            this->_vector.push_back(atoi(token.c_str()));
            this->_deque.push_back(atoi(token.c_str()));
        }
    }
}

ft::PmergeMe::~PmergeMe(void) {}

const std::vector<int> &ft::PmergeMe::getVector(void) const
{
    return this->_vector;
}

const std::deque<int> &ft::PmergeMe::getDeque(void) const
{
    return this->_deque;
}

std::vector<int> &ft::PmergeMe::setVector(void)
{
    return this->_vector;
}

std::deque<int> &ft::PmergeMe::setDeque(void)
{
    return this->_deque;
}