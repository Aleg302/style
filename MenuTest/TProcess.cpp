#include "TProcess.h"

#include <iostream>
#include "TAnimal.h"

void Process::dialog(const Animal& creature) {
    std::cout << creature.GetName() << ": " << creature.Voice() << "\n";
}