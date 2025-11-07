#include "student.h"

int student::getStudentNumber() const
{
    return studentNumber;
}

void student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

std::string student::getName() const
{
    return name;
}

void student::setName(const std::string &newName)
{
    name = newName;
}

double student::getAverage() const
{
    return average;
}

void student::setAverage(double newAverage)
{
    average = newAverage;
}

student::student() {}
