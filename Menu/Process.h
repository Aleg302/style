#include "BaseItem.h"

#include <vector>

class Process {
public:
    typedef std::vector<std::pair<int, BaseItem>> Processes;
    Process(Processes processes);
};