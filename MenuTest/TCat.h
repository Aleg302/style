#include "TAnimal.h"

class Cat: public Animal {
public:
    Cat(const std::string& n);

    std::string Voice() const override;
};