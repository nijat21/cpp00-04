#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:7;amount:16576;created
Account::Account(int initial_deposit) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "created" << std::endl;
};

// [19920104_091532] index:7;amount:8942;closed
Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "closed" << std::endl;
};

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm date_time = *localtime(&now);
    char buf[20];
    std::strftime(buf, 20, "[%Y%m%d_%H%M%S]", &date_time);
    std::cout << std::string(buf) << " ";
};

int Account::getNbAccounts() {
    return _nbAccounts;
};

int Account::getTotalAmount() {
    return _totalAmount;
};

int Account::getNbDeposits() {
    return _totalNbDeposits;
};

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
};

// [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
              << "total:" << getTotalAmount() << ";"
              << "deposits:" << getNbDeposits() << ";"
              << "withdrawals:" << getNbWithdrawals() << std::endl;
};

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";";
    _totalAmount += deposit;
    _totalNbDeposits++;
    _amount += deposit;
    _nbDeposits++;
    std::cout << "deposit:" << deposit << ";amount:" << checkAmount()
              << ";nb_deposits:" << _nbDeposits << std::endl;
};

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";";
    if (_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";amount:" << checkAmount()
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount() const {
    return _amount;
};

// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << checkAmount() << ";"
              << "deposits:" << _nbDeposits << ";"
              << "withdrawals:" << _nbWithdrawals << std::endl;
};