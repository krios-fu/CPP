#include "BitcoinExchange.hpp"

ft::BitcoinExchange::BitcoinExchange(const std::string _file)
{
    std::string line;
    std::string key;
    std::string value;
    std::fstream read_file(_file);
    std::getline(read_file, line);
    char *check;

    while (std::getline(read_file, line))
    {
        std::istringstream stream(line);
        std::getline(stream, key, ',');
        std::getline(stream, value, ',');
        float val = strtof(value.c_str(), &check);
        if (!check[0] && this->checkDate(key))
            this->history[key] = val;
        else
        {
            throw ft::BitcoinExchange::ParceException("bad format");
        }
    }
}

ft::BitcoinExchange::BitcoinExchange(const BitcoinExchange &_data)
{
    this->history = _data.getBitcoinHistory();
}

ft::BitcoinExchange &ft::BitcoinExchange::operator=(const BitcoinExchange &_data)
{
    if (this == &_data)
        return *this;
    this->history = _data.getBitcoinHistory();
    return *this;
}

ft::BitcoinExchange::~BitcoinExchange(void)
{
    this->history.clear();
}

const std::map<std::string, float> &ft::BitcoinExchange::getBitcoinHistory(void) const
{
    return this->history;
}

float ft::BitcoinExchange::getResultBtc(const std::string &_date, float n) const
{
    std::map<std::string, float>::const_iterator it = this->getBitcoinHistory().upper_bound(_date);
    if (it != this->getBitcoinHistory().begin())
        --it;
    return it->second * n;
}

bool ft::BitcoinExchange::checkNumber(float _n)
{
    if (_n < 0)
    {
        throw ft::BitcoinExchange::ParceException("not a positive number");
        return false;
    }
    if (_n > float(1000))
    {
        throw ft::BitcoinExchange::ParceException("too large number");
        return false;
    }
    return true;
}

bool ft::BitcoinExchange::checkDate(const std::string &_date)
{
    struct tm time;
    char formato[] = "%Y-%m-%d";
    const char *date = _date.c_str();

    if (!strptime(date, formato, &time))
        return false;
    return true;
}
