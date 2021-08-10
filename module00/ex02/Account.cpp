/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:20:31 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/10 15:03:32 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


Account::Account (int initial_deposit)
{
	(void) initial_deposit;
	
}

Account::~Account (void)
{
	
}


/* GETTERS */

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits (void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals (void)
{
	return (Account::_totalNbWithdrawals);
}

