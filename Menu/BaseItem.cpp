
#include "BaseItem.h"

#include <iostream>
#include "TempItem.h"

BaseItem::BaseItem(const std::string n): name(n) {
}

const char* BaseItem::getMsg() { return "ParentClass"; }