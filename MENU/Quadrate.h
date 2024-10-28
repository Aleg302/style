#include <iostream>

using namespace std;

class Quadrate {
public:
    Quadrate();
    void setA();
    double getA();
    double getPerimeter();
    double getSquare();
    void Task();
    void Message();
    void Solution();
private:
    double a = 0.0;
    double P = 0.0;
    double S = 0.0; // дабл, так как это веественный тип
};