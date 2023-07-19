#pragma once
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

namespace ft
{

    class BitcoinExchange
    {
    private:
        std::map<std::string, float> history;

    public:
        BitcoinExchange(const std::string _data);
        BitcoinExchange(const BitcoinExchange &_data);
        BitcoinExchange &operator=(const BitcoinExchange &_data);
        virtual ~BitcoinExchange(void);

        const std::map<std::string, float> &getBitcoinHistory(void) const;
        float getResultBtc(const std::string &date, float n) const;
        bool checkDate(const std::string &_date);
        bool checkNumber(float _n);

        class ParceException : public std::exception
        {
        private:
            const std::string message;

        public:
            ParceException(const std::string exc) : message(exc) {}
            virtual ~ParceException() throw() {}
            virtual const char *what() const throw()
            {
                return this->message.c_str();
            }
        };
    };
}