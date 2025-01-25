#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>

class BankAccount {
private:
    std::string NumberAccount;
    double Balance;

public:
    BankAccount(const std::string &accNum);
    
    void Put(double Summa);
    void Remove(double Summa);
    double GetBalance() const;
};

#endif // BANKACCOUNT_HPP
