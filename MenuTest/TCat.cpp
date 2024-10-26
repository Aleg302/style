#include "TCat.h"

Cat::Cat(const std::string& n): Animal(n) {}

std::string Cat::Voice() const {
    return "Meow!";
}