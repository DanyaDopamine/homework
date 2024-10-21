#include "BankAccount.hpp"
#include <iostream>

BankAccount::BankAccount(const std::string &accNum)
    : NumberAccount(accNum), Balance(0.0) {}

void BankAccount::Put(double Summa) {
    if (Summa > 0) {
        Balance += Summa;
    } else {
        std::cerr << "Сумма депозита должна быть положительной!" << std::endl;
    }
}

void BankAccount::Remove(double Summa) {
    if (Summa > 0 && Summa <= Balance) {
        Balance -= Summa;
    } else {
        std::cerr << "Недостаточно средств или неверная сумма снятия!" << std::endl;
    }
}

double BankAccount::GetBalance() const {
    return Balance;
}
