#include "wheel.h"
#include <iostream>
#include <string>
using namespace std;

wheel::wheel(){
    size = 0;
    type = "";
}

wheel::wheel(int s, string t){
    size = s;
    type = t;
}

int wheel :: getSize(){
    return size;
}
void wheel :: setSize(int s){
    size =s;
}
string wheel :: getType(){
    return type;
}
void wheel :: setType(string t){
    type =t;
}

