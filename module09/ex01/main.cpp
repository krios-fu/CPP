#include "RPN.hpp"
int main(int argc, char const *argv[])
{
    try
    {
        if (argc < 2)
            throw std::runtime_error("Not input");
        try
        {
            ft::RPN lol(argv[1]);
            std::cout << lol.getTotal() << std::endl;
        }
        catch (const std::exception &_err)
        {
            std::cerr << "Error: " << _err.what() << '\n';
        }
    }
    catch (const std::exception &_err)
    {
        std::cerr << "Error: " << _err.what() << '\n';
    }

    return 0;
}
