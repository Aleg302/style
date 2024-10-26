#pragma once
#include <string>
#include "BaseItem.h"

using namespace std;

class TempItem : public BaseItem {
public:
    const std::string n;
    TempItem(const std::string n);
    void run();
};