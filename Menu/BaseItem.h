#pragma once
#include <string>

using namespace std;

class BaseItem {
public:
    const std::string name;
    BaseItem(const std::string n);
    virtual const char* getMsg();
};