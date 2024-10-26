#pragma once
#include <string>
#include "TempItem.h"

using namespace std;

class Square : public TempItem {
public:
    const std::string n;
    Square(const std::string n);
    void run();
};