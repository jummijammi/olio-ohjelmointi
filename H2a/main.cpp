#include <iostream>
#include "Car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
using namespace std;

int main()
{
 {
    car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Supra");
    myCar.setYearModel(1998);

    myCar.printData();
   cout << "**************************" << endl;

 }
 {
 Rectangle *objectRectangle = new Rectangle();

 objectRectangle->setWidth(5.0);
 objectRectangle->setHeight(3.0);

 cout << "pinta-ala: " << objectRectangle->getArea() << endl;
 cout << "ymparysmitta: " << objectRectangle->getCircum() << endl;

 delete objectRectangle;
 objectRectangle = nullptr;
    cout << "**************************" << endl;
 }
 {

     std::unique_ptr<student> s = std::make_unique<student>();


     s->setName("Timo Soini ");
     s->setStudentNumber(123456);
     s->setAverage(4.2);


     std::cout << "Opiskelijan nimi: " << s->getName() << std::endl;
     std::cout << "Opiskelijanumero: " << s->getStudentNumber() << std::endl;
     std::cout << "Keskiarvo: " << s->getAverage() << std::endl;

 }






 return 0;

}
