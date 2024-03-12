/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:31:11 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 13:50:45 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}


void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
	return ;
}


void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount
	<< ";deposits:" << deposit
	<< ";amount:" << this->checkAmount() + deposit
	<< ";nb_deposits:" << 	this->_nbDeposits + 1
	<< std::endl;
	this->_totalAmount += deposit;
	this->_amount = this->checkAmount() + deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->checkAmount() || withdrawal > this->getTotalAmount())
	{
		this->_displayTimestamp();
		std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:refused"
		<< std::endl;
		return (false);
	}
	else
	{
		this->_displayTimestamp();
		std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << this->checkAmount() - withdrawal
		<< ";nb_withdrawal:" <<	this->_nbWithdrawals + 1
		<< std::endl;
		this->_totalAmount -= withdrawal;
		this->_amount = this->checkAmount() - withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
	}
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
	return ;
}

Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	std::cout << "index:" << this->_accountIndex;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return ;
}

Account::~Account( void )
{
	this->_displayTimestamp();;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return ;
}
