#include "Account.class.hpp"
#include <iostream>
#include <ctime>


static void	displayTime(void)
{
	time_t			timer;
	struct tm		*timeinfo;
	char			buffer[80];

	time(&timer);
	timeinfo = localtime(&timer);
	strftime(buffer, 80, "[%Y%d%m_%H%M%S] ", timeinfo);
	std::cout << buffer;
}

int			Account::_nbAccounts;
int			Account::_totalAmount;
int			Account::_totalNbDeposits;
int			Account::_totalNbWithdrawals;

			Account::Account(int initial_deposit)
{
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	this->_amount += initial_deposit;
	Account::_totalAmount += initial_deposit;
	displayTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

			Account::~Account(void)
{
	displayTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int			Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int			Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int			Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int			Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void		Account::displayAccountsInfos(void)
{
	displayTime();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void		Account::makeDeposit(int deposit)
{
	displayTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	displayTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		std::cout << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

int			Account::checkAmount(void) const
{
	return this->_amount;
}

void		Account::displayStatus(void) const
{
	displayTime();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
