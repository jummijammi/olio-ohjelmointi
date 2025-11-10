#ifndef CAR_H
#define CAR_H

#include <string>
class car
{
private:
    std::string brand;
    std::string model;
    int yearModel;
public:

    car(std::string b, std::string m, int y);
    void printData() const;

};


#endif // CAR_H
