#include <iostream>
#include "classa1.h"
#include "classb.h"
#include "classa2.h"
using namespace std;

int b = 6;
int a = 5;


int main()

{
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

int *pointerA = &a;
    cout <<  "osoite on: " << pointerA  << " ja pointerA:n arvo on: " << *pointerA << endl;

int &refA = a;
    cout << "osoite on: " << &refA << " ja refA:n arvo on: " << refA << endl;

 refA = b;
    cout << "osoite on: " << &refA << " ja refA:n arvo on: " << refA << endl;

 pointerA = &b;
    cout <<  "osoite on: " << pointerA  << " ja pointerA:n arvo on: " << *pointerA << endl;

 ClassB objB;
 objB.setInfo("Olion B asettama info");

 ClassA1 objA1(objB);
 objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

ClassB &refB=objB;
ClassA2 objA2(refB);
objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
