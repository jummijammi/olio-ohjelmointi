#include "car.h"
#include <iostream>

car::car(std::string b, std::string m, int y)
    : brand(b), model(m), yearModel(y) {}

void car::printData() const {
    std::cout << "Merkki: " << brand << ", Malli: " << model << ", Vuosi: " << yearModel << std::endl;
}
