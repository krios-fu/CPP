#include "RPN.hpp"

ft::RPN::RPN(std::string _str)
{
    std::istringstream stream(_str);
    std::string token;
    while (std::getline(stream, token, ' '))
    {
        if (token.length() > 2)
            throw std::runtime_error("Number to long");
        if (!token[0])
            continue;
        else if (isdigit(token[0]))
        {
            this->_fifo.push(token[0] - '0');
            continue;
        }
        if (this->_fifo.size() < 2)
            throw std::runtime_error("Syntax " + token);
        int a = this->_fifo.top();
        this->_fifo.pop();
        int b = this->_fifo.top();
        this->_fifo.pop();
        switch (token[0])
        {
        case '+':
            this->_fifo.push(b + a);
            break;
        case '-':
            this->_fifo.push(b - a);
            break;
        case '*':
            this->_fifo.push(b * a);
            break;
        case '/':
            if (b == 0)
                throw std::runtime_error("Divide by zero");
            this->_fifo.push(b / a);
            break;
        default:
            throw std::runtime_error("Syntax " + token);
        }
    }

    this->total = this->_fifo.top();
}

bool ft::RPN::alphaNumeric(int _token)
{
    return isalpha(_token) || isalnum(_token);
}

ft::RPN::RPN(const RPN &_copy)
{
    this->operator=(_copy);
}

ft::RPN &ft::RPN::operator=(const RPN &_copy)
{
    if (this == &_copy)
        return *this;
    this->_fifo = _copy.getStack();
    this->total = _copy.getTotal();
    return *this;
}

ft::RPN::~RPN() {}

int ft::RPN::getTotal() const
{
    return this->total;
}

const std::stack<int> &ft::RPN::getStack() const
{
    return this->_fifo;
}
