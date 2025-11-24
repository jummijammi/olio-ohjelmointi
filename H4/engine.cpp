#include "engine.h"
#include <iostream>
using namespace std;

engine::engine(){
    horsepower = 0;
    displacement = 0.0;
}

engine::engine(int h, double d) {
    horsepower = h;
    displacement = d;
}

int engine :: getHorsepower(){
    return horsepower;
}

void engine :: setHorsepower(int h){
    horsepower =h;
}

double engine :: getDisplacement(){
    return displacement;
}

void engine :: setDisplacement(double d){
    displacement =d;
}

