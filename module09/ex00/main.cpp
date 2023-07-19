#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    try
    {
        if (argc != 2)
            throw ft::BitcoinExchange::ParceException("could not open file.");
        ft::BitcoinExchange btcExc("data.csv");
        try
        {
            std::string line;
            std::fstream read_file(argv[1]);
            if (!read_file.is_open())
                throw ft::BitcoinExchange::ParceException("could not open file.");
            std::getline(read_file, line);

            while (std::getline(read_file, line))
            {
                try
                {
                    char date[12];
                    float data;
                    if (!(std::sscanf(line.c_str(), "%11[^|]|%f", date, &data) == 2) || !btcExc.checkDate(date))
                    {
                        throw ft::BitcoinExchange::ParceException(("bad input => " + line));
                        continue;
                    }
                    if (!btcExc.checkNumber(data))
                        continue;
                    std::cout << date << " => " << data << " = " << btcExc.getResultBtc(date, data) << std::endl;
                }
                catch (std::exception &_err)
                {
                    std::cerr << "Error: " << _err.what() << std::endl;
                }
            }
        }
        catch (std::exception &_err)
        {
            std::cerr << "Error: " << _err.what() << std::endl;
        }
    }
    catch (std::exception &_err)
    {
        std::cerr << "Error: " << _err.what() << std::endl;
        return 1;
    }
}