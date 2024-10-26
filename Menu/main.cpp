#include <iostream>

#include "TempItem.h"
#include "Square.h"
#include "Process.h"

int main() {
    Process menu({{1, TempItem("Тестирование.")},
                  {2, TempItem("Поиск ошибок.")},
                  {3, Square("Площадь.")}});
    
    
    return 0;
}