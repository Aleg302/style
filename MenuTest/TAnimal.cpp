#include "TAnimal.h"

Animal::Animal(const std::string& n): name(n) {}

const std::string& Animal::GetName() const {
    return name;
}

std::string Animal::Voice() const {
    return "Generic creature voice";
}
