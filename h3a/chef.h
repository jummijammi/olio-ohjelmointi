#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(std::string n);
    ~Chef();
    void makeSalad();
    void makeSoup();
};

class ItalianChef : public Chef {
public:
    ItalianChef(std::string n);
    ~ItalianChef();
    std::string getName();
    void makePasta();
};

#endif
