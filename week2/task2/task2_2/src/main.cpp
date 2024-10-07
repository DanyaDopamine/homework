#include <iostream>
#include "BankAccount.hpp"

int main() {
    BankAccount Account("123456789");
    int Choice;

    do {
        std::cout << " Меню:" << std::endl;
        std::cout << "1. Положить деньги" << std::endl;
        std::cout << "2. Снять деньги" << std::endl;
        std::cout << "3. Посмотреть баланс" << std::endl;
        std::cout << "0. Выход" << std::endl;
        std::cout << "Введите ваш выбор: ";
        std::cin >> Choice;

        switch (Choice) {
            case 1: {
                double Summa;
                std::cout << "Введите сумму для пополнения: ";
                std::cin >> Summa;
                Account.Put(Summa);
                std::cout << "На счет добавлено: " << Summa << " руб." << std::endl;
                break;
            }
            case 2: {
                double Summa;
                std::cout << "Введите сумму для снятия: ";
                std::cin >> Summa;
                Account.Remove(Summa);
                break;
            }
            case 3: {
                std::cout << "Текущий баланс: " << Account.GetBalance() << " руб." << std::endl;
                break;
            }
            case 0:
                std::cout << "Выход из программы." << std::endl;
                break;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте еще раз." << std::endl;
        }
    } while (Choice != 0);

    return 0;
}
