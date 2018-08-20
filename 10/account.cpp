#include <iostream>
#include <cstring>
#include "account.h"

Account::Account(const char * client, const char * num, double cash)
{
    name = client;
    strcpy(account, num);
    account[MAX-1] = '\0';
    deposit = cash;
}

void Account::show_account() const
{
    std::cout << "name: " << name
              << "account: " << account
              << "deposit: " << deposit << std::endl;
}

void Account::save(double n)
{
    std::cout << "You will save" << n << "in your account.\n";
    deposit += n;
    std::cout << "finished.\n";
    std::cout << "Now, your deposit is " << deposit << ".\n";
    return;
}

void Account::take_out(double n)
{
    std::cout << "You will take out " << n << "to your account.\n";
    deposit -= n;
    std::cout << "finished.\n";
    std::cout << "Now, your deposit is " << deposit << ".\n";
    return;
}