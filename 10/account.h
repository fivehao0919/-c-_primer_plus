// 
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Account
{
private:
    enum {MAX = 10};
    std::string name;
    char account[MAX];
    double deposit;
public:
    Account(const char * client, const char * num, double cash = 0);
    void show_account() const;
    void save(double n);
    void take_out(double n);
};

#endif