#include "Square.h"

#include <iostream>
#include "TempItem.h"

Square::Square(const std::string n) : TempItem(n) {
}

void Square::run(){  
    std::cout << "Площадь!" << endl;
}