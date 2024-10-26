
#include "TempItem.h"

#include <iostream>
#include "BaseItem.h"

TempItem::TempItem(const std::string n) : BaseItem(n) {
}

void TempItem::run(){  
    std::cout << "Выполнение!" << endl;
}
