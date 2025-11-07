#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width(0.0), height(0.0){}

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setHeight(double h){
    height = h;
}

double Rectangle::getArea(){
    return width * height;
}

double Rectangle::getCircum(){
    return 2  * (width + height);

}
