#include "PmergeMe.hpp"

template <typename Iterator>
void merge(Iterator first, Iterator middle, Iterator last)
{
    Iterator left = first;
    Iterator right = middle;
    std::vector<typename Iterator::value_type> temp;

    while (left != middle && right != last)
    {
        if (*left < *right)
        {
            temp.push_back(*left);
            ++left;
        }
        else
        {
            temp.push_back(*right);
            ++right;
        }
    }

    temp.insert(temp.end(), left, middle);
    temp.insert(temp.end(), right, last);

    copy(temp.begin(), temp.end(), first);
}

template <typename Iterator>
void mergeSort(Iterator first, Iterator last)
{
    if (last - first > 1)
    {
        Iterator middle = first + (last - first) / 2;
        mergeSort(first, middle);
        mergeSort(middle, last);
        merge(first, middle, last);
    }
}

template <typename Iterator>
void insertionSort(Iterator first, Iterator last)
{
    for (Iterator it = first + 1; it != last; ++it)
    {
        typename Iterator::value_type key = *it;
        Iterator j = it - 1;

        while (j >= first && *j > key)
        {
            *(j + 1) = *j;
            --j;
        }

        *(j + 1) = key;
    }
}

template <typename Container>
void fordJohnsonMergeInsertionSort(Container &container)
{
    if (container.size() > 1)
    {
        typename Container::iterator middle = container.begin() + container.size() / 2;
        mergeSort(container.begin(), middle);
        insertionSort(middle, container.end());
        merge(container.begin(), middle, container.end());
    }
}

void print(std::vector<int> const &lol, std::string _message)
{

    std::vector<int>::const_iterator begin = lol.begin();
    std::vector<int>::const_iterator end = lol.end();

    std::cout << _message;

    for (; begin != end; ++begin)
    {
        std::cout << (*begin) << ((begin != end - 1) ? ' ' : '\n');
    }
}

int main(int argc, char *argv[])
{
    try
    {
        ft::PmergeMe lol(argc, argv);

        print(lol.getVector(), "Before: ");

        clock_t tmStartVec = std::clock();
        fordJohnsonMergeInsertionSort(lol.setVector());
        clock_t tmEndVec = std::clock();

        print(lol.getVector(), "After: ");

        clock_t tmStartLis = std::clock();
        fordJohnsonMergeInsertionSort(lol.setDeque());
        clock_t tmEndLis = std::clock();

        std::cout << "Time to process a range of " << lol.getVector().size() << " elements with std::vector: " << (double)(tmEndVec - tmStartVec) * 1000.0 / CLOCKS_PER_SEC << " ms" << std::endl;
        std::cout << "Time to process a range of " << lol.getDeque().size() << " elements with std::deque: " << (double)(tmEndLis - tmStartLis) * 1000.0 / CLOCKS_PER_SEC << " ms" << std::endl;
    }
    catch (const std::exception &_err)
    {
        std::cerr << _err.what() << '\n';
    }
}