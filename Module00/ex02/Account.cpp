/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:56:51 by yongwkim          #+#    #+#             */
/*   Updated: 2021/08/25 16:35:17 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//static

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "amount:" << Account::_amount << ";"
				<< "created" << std::endl;
}

Account::Account( void )
{
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "amount:" << Account::_amount << ";"
				<< "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "amount:" << Account::_amount << ";"
				<< "closed" << std::endl;
}

int Account::getNbAccounts( void )
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

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
				<< "total:" << Account::_totalAmount << ";"
				<< "deposits:" << Account::_totalNbDeposits << ";"
				<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

//member

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "p_amount:" << Account::_amount << ";"
				<< "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << Account::_amount << ";"
				<< "nb_deposits:" << Account::_nbDeposits<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "p_amount:" << Account::_amount << ";"
				<< "withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "reufused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";"
				<< "amount:" << Account::_amount << ";"
				<< "nb_withdrawals:" << Account::_nbWithdrawals<< std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (_amount > 0);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
				<< "amount:" << Account::_amount << ";"
				<< "deposits:" << Account::_nbDeposits
				<< "withdrawals:" << Account::_nbWithdrawals
				<< std::endl;
}

//private
void	Account::_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> tp = std::chrono::system_clock::now();
	time_t time = std::chrono::system_clock::to_time_t(tp);
	tm *tm_local = localtime(&time);

	std::cout << "[" << tm_local->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_sec << "] ";
}

