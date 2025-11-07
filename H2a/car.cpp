#include "Car.h"
#include <iostream>

void car::setBrand(std::string b){
    brand =b;
}

void car::setModel(std::string m){
model = m;


}

void car::setYearModel(int y){
    yearModel = y;
}

void car::printData(){
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Valmistusvuosi:" << yearModel << std::endl;

}
