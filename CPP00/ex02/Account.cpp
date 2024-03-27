/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:57:20 by martorre          #+#    #+#             */
/*   Updated: 2024/03/27 13:25:33 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

std::string displayTimestamp() {
    // Obtener la fecha y hora actual
    std::time_t now = std::time(nullptr);
    std::tm* tm_now = std::localtime(&now);

    // Formatear la fecha y hora
    char buffer[20]; // Suficiente para almacenar la cadena formateada
    std::strftime(buffer, 20, "[%Y%m%d_%H%M%S]", tm_now);

    // Devolver la marca de tiempo formateada como una cadena
    return std::string(buffer);
}

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _totalAmount += _amount; 
    _accountIndex = _nbAccounts;
    _totalNbDeposits = _nbDeposits;
    _totalNbWithdrawals = _nbWithdrawals;
    _nbAccounts++;
    std::cout << displayTimestamp() << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}


int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int Account::checkAmount() const
{
    return (_amount);
}

void    Account::displayAccountsInfos()
{
    std::cout << displayTimestamp() << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    std::cout << displayTimestamp() << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _totalAmount += deposit;
    if (deposit != 0)
    {
        _nbDeposits++;
        _totalNbDeposits += _nbDeposits;
    }
    std::cout << displayTimestamp() << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    bool    a=false;
    if (withdrawal > checkAmount())
        std::cout << displayTimestamp() << " index:" << _accountIndex << ";p_amount:" << _amount  << ";withdrawal:refused" << std::endl;
    else
    {
        _nbWithdrawals++;
        _totalNbWithdrawals += _nbWithdrawals;
        _totalAmount = _totalAmount - withdrawal;
        std::cout << displayTimestamp() << " index:" << _accountIndex << ";p_amount:" << _amount  << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        _amount = _amount - withdrawal;
    }
    return (a);
}

Account::~Account()
{
    std::cout << displayTimestamp() << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
