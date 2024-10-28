#include "Quadrate.h"

#include <complex>

Quadrate::Quadrate() {
    Task();
    Message();
    Solution();
}

double Quadrate::getPerimeter() {
    P = 4 * getA(); 
    return P;
}

double Quadrate::getSquare() {
    S = pow(getA(), 2);
    return S;
}

void Quadrate::Solution() {
    setA();
    cout << "Найден периметр квадрата с длинной стороны " << getA() << " он равен: " << getPerimeter() << endl;
    cout << "Найдена Площадь квадрата с длинной стороны " << getA() << " она равна: " << getSquare() << endl << endl;
}

void Quadrate::Task()
{
    cout << endl << "Begin 1&&2. Дана сторона квадрата a. Найти его периметр и площадь." << endl;
}

void Quadrate::Message() {
    cout << endl << "Сторона мысль. Она дана. сторона фигуры-объекта." << endl
                 << "Найди его. Периметр. как в компьютерщиках, много" << endl
                 << "всякой всячины." << endl << endl;
}

void Quadrate::setA() {
    cout << "Введите длинну(значение) стороны квадрата: ";
    cin >> a;
}

double Quadrate::getA() {
    return a;
}