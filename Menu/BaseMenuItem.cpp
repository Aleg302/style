#include "BaseMenuItem.h"

BaseMenuItem::BaseMenuItem(const std::string& n): name(n) {}

const std::string& BaseMenuItem::getName() const {
    return name;
}
