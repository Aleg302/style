
#include "TDog.h"

Dog::Dog(const std::string& n): Animal(n) {}

std::string Dog::Voice() const {
    return "Woof!";
}
