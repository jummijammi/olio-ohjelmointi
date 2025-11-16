#include "chef.h"
#include <iostream>

// Chef-luokan toteutukset
Chef::Chef(std::string n) {
    name = n;
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

// ItalianChef-luokan toteutukset
ItalianChef::ItalianChef(std::string n) : Chef(n) {
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}
