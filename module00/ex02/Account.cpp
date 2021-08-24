/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:20:31 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/25 00:10:48 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>
#include <iomanip>
#include <iostream>

#define DISPLAY_TIME Account::_displayTimestamp();

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	DISPLAY_TIME
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << initial_deposit << ";"
			  << "created" << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	DISPLAY_TIME
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "created" << std::endl;
}

Account::~Account()
{
	DISPLAY_TIME
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
	this->_nbAccounts--;
}

void Account::_displayTimestamp( void )
{
	time_t now = time(0);

	tm ltm = *localtime(&now);
	std::cout << std::setfill('0') << "[" << (ltm.tm_year + 1900)
			  << std::setw(2) << ltm.tm_mon + 1
			  << std::setw(2) << ltm.tm_mday << "_"
			  << std::setw(2) << ltm.tm_hour
			  << std::setw(2) << ltm.tm_min
			  << std::setw(2) << ltm.tm_sec << "] ";
}

void Account::displayAccountsInfos( void )
{
	DISPLAY_TIME
	std::cout << "accounts:" << Account::_nbAccounts << ";"
			  << "total:" << Account::_totalAmount << ";"
			  << "deposits:" << Account::_totalNbDeposits << ";"
			  << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	DISPLAY_TIME
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" <<  this->_amount << ";"
			  << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

int Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void Account::displayStatus( void ) const
{
	DISPLAY_TIME
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	DISPLAY_TIME
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" <<  this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

/* GETTERS */

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits ( void )
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals ( void )
{
	return (Account::_totalNbWithdrawals);
}