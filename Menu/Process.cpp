#include "Process.h"

#include <iostream>
#include "BaseMenuItem.h"

Process::Process(const BaseMenuItem& obj) {
    std::cout << obj.getName() << "\n";
}