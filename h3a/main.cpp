#include <iostream>
#include "chef.h"
using namespace std;


int main() {

    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "The name of the Italian Chef is " << italianChef.getName() << std::endl;

    return 0;
}


