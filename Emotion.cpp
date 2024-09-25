#include <iostream>
#include "Emotion.h"

void Emotion::brutforce() {
    std::cout << "It's working=)" << std::endl;
    for(uint16_t sign = 0; sign <= 65535; sign++)
        std::cout << sign << " - " << std::to_string(sign) << std::endl;
    std::cout << "Here it's working too=)" << std::endl;
}