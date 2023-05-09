#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(){
		std::cout<<"Constructor vacio";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
//	std::cout<<"constructor con initial deposit";
	static int index;
	this->_accountIndex = index;
	index++;
	this->_amount = initial_deposit;
	_nbAccounts++;
	this->_totalAmount = this->_amount + this->_totalAmount;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex;
	std::cout<<";amount:"<<this->_amount;
	std::cout<<";created"<<std::endl;
}

Account::~Account(){
//	std::cout<<"Destructor";
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex;
	std::cout<<";amount:"<<this->_amount;
	std::cout<<";closed"<<std::endl;
	
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
//	std::cout<<"accounts infos"<<std::endl;
	_displayTimestamp();
	std::cout<<"accounts:"<<_nbAccounts;
	std::cout<<";total:"<<_totalAmount;
	std::cout<<";deposits:"<<_totalNbDeposits;
	std::cout<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::makeDeposit( int deposit ){
	
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex;
	std::cout<<";p_amount:"<<this->_amount;
	std::cout<<";deposit:"<<deposit;
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
	std::cout<<";amount:"<<this->_amount;
	std::cout<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
	this->_totalNbDeposits++;
	this->_totalAmount = this->_totalAmount + deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex;
	std::cout<<";p_amount:"<<this->_amount;
	if (withdrawal > this->checkAmount()){
		std::cout<<";withdrawal:refused"<<std::endl;
		return(0);
	}
	else{
		std::cout<<";withdrawal:"<<withdrawal;
		this->_amount = this->_amount - withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_totalAmount = this->_totalAmount - withdrawal;
		std::cout<<";amount:"<<this->_amount;
		std::cout<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
	}
	return (0);
}

int		Account::checkAmount( void ) const{
//	if (withdrawal > this->_amount)
//		return (1);
	return (this->_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex;
	std::cout<<";amount:"<<this->_amount;
	std::cout<<";deposits:"<<this->_nbDeposits;
	std::cout<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void	Account::_displayTimestamp( void ){
	struct tm *ourtime;
	std::time_t act_time;

	act_time = std::time(nullptr);
	ourtime = std::localtime(&act_time);
	std::cout<<"[";
	std::cout<<std::setw(4)<<ourtime->tm_year+1900;
	std::cout<<std::setw(2)<<std::setfill('0')<<ourtime->tm_mon;
	std::cout<<std::setw(2)<<std::setfill('0')<<ourtime->tm_mday;
	std::cout<<"_";
	std::cout<<std::setw(2)<<std::setfill('0')<<ourtime->tm_hour;
	std::cout<<std::setw(2)<<std::setfill('0')<<ourtime->tm_min;
	std::cout<<std::setw(2)<<std::setfill('0')<<ourtime->tm_sec;
	std::cout<<"]";
}