#include <iostream>
#include <vector>
#include "car.h"

int main() {
    std::vector<car> carList;

    carList.emplace_back("Toyota", "Corolla", 1992);
    carList.emplace_back("Ford", "Focus", 2004);
    carList.emplace_back("Tesla", "Model 3", 2022);

    std::cout << "Toisen auton tiedot:" << std::endl;
    carList[1].printData();

    std::cout << "\nKaikkien autojen tiedot:" << std::endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
