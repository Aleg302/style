#include "TAnimal.h"

class Dog: public Animal {
public:
    Dog(const std::string& n);
    std::string Voice() const;
};
