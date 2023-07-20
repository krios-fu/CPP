#pragma once
#include <stack>
#include <iostream>
#include <sstream>



namespace ft
{

    class RPN
    {
    private:
        std::stack<int> _fifo;
        int total;

    public:
        RPN(std::string _str);
        RPN(const RPN &_copy);
        RPN &operator=(const RPN &_copy);
        virtual ~RPN();
        int getTotal() const;
        std::stack<int> const &getStack() const;
        bool alphaNumeric(int _token);
    };

}