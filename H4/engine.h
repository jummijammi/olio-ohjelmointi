#ifndef ENGINE_H
#define ENGINE_H

class engine
{

private:
  int  horsepower;
    double displacement;


public:
    engine();
    engine (int, double);

    int getHorsepower();
    void setHorsepower(int h);
    double getDisplacement();
    void setDisplacement(double d);

};

#endif // ENGINE_H
