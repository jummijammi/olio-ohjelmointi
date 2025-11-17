#include "animal.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
    unique_ptr<Animal> animal = make_unique<Animal>();
    unique_ptr<Animal> dog = make_unique<Dog>();

    animal->callOut();
    dog->callOut();

    return 0;

}
