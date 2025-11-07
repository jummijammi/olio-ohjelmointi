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
    void setBrand(std::string brand);
    void setModel(std::string model);
    void setYearModel(int yearModel);
    void printData();
};

#endif // CAR_H
