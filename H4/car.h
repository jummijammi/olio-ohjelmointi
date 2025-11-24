#ifndef CAR_H
#define CAR_H
#include <string>
#include "engine.h"
#include "wheel.h"

using namespace std;

class car
{
private:
    engine objEngine;
    wheel objWheel1;
    wheel objWheel2;
    wheel objWheel3;
    wheel objWheel4;

    string model;
    string brand;


public:
    car();
    car(string, string);
    void setEngine();
    void setWheels();

    string getModel();
    void setModel(string);

    string getBrand();
    void setBrand(string);

    void printDetails();




};

#endif // CAR_H
