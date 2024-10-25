#pragma once
#include <string>

class BaseMenuItem {
private:
    std::string name;
public:
    BaseMenuItem(const std::string& n);
    const std::string& getName() const;
};
