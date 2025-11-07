#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class student
{
private:
    std::string name;
    int studentNumber;
    double average;


public:
    student();
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    std::string getName() const;
    void setName(const std::string &newName);
    double getAverage() const;
    void setAverage(double newAverage);
};

#endif // STUDENT_H
