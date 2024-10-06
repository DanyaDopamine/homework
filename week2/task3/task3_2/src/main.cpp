#include <iostream>
#include "Car.h"
#include "Engine.h"
#include "Passenger.h"

int main() {
    Engine engine(150); // Мощность двигателя
    Car car("Toyota Corolla", engine); // Создание автомобиля

    // Добавление пассажиров
    Passenger passenger1("Alice");
    Passenger passenger2("Bob");

    car.addPassenger(passenger1);
    car.addPassenger(passenger2);

    // Вывод информации
    car.displayInfo();

    // Удаление пассажира
    car.removePassenger(passenger1);
    std::cout << "\nAfter removing Alice:\n";
    car.displayInfo();

    return 0;
}
