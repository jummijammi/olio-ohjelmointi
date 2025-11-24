#ifndef WHEEL_H
#define WHEEL_H
#include <string>
class wheel
{
private:
    int size;
    std::string type;

public:
    wheel();
    wheel (int, std::string);

    int getSize();
    void setSize(int);
    std::string getType();
    void setType(std::string);
};

#endif // WHEEL_H
