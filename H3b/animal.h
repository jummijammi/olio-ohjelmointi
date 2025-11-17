#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <memory>


class Animal
{
public:
    virtual ~Animal() = default;
    virtual void callOut() const;
};

class Dog : public Animal {
public:
    void callOut() const override;
};

#endif // ANIMAL_H
