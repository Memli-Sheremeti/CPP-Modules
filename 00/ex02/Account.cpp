/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:31:11 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 17:27:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

void	Account::makeDeposit(int deposit)
{
	this->_amount = this->checkAmount() + deposit;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->checkAmount())
		return (false);
	else
	{
		this->_amount = this->checkAmount() - withdrawal;
		this->_nbWithdrawals++;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" this->_accountIndex << ";amount:" << this->_amount <<
	";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	std::cout << "Constructor" << std::endl;
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return ;
}

Account::~Account( void )
{
	std::cout << "Destructor" << std::endl;
	return ;
}
