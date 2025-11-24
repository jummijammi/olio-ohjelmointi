#include "car.h"
#include <iostream>

car::car() {
    model = "";
    brand = "";
}

car::car(string b, string m){
    brand = b;
    model = m;
}

void car::setEngine(){
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void car::setWheels(){
    objWheel1.setSize(17);
    objWheel2.setSize(17);
    objWheel3.setSize(17);
    objWheel4.setSize(17);

    objWheel1.setType("kesarengas");
    objWheel2.setType("kesarengas");
    objWheel3.setType("kesarengas");
    objWheel4.setType("kesarengas");
}

string car::getModel(){
    return model;
}

void car::setModel(string m){
    model = m;
}

string car::getBrand(){
    return brand;
}

void car::setBrand(string b){
    brand = b;
}

void car::printDetails(){
    cout << "Auto: " << model << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << "hp, " << objEngine.getDisplacement() << "L" << endl;
    cout << "Rengas 1:" << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2:" << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3:" << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4:" << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}
