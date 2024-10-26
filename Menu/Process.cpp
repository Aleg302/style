#include "Process.h"

#include <iostream>
#include "TempItem.h"
#include "BaseItem.h"
Process::Process(Processes processes) {
    for(auto process : processes) {
        cout << process.first << ": "<< process.second.name << endl;
    }
    cout << "Введите пункт меню и нажмите Enter: ";
    
    int item;
    cin >> item;
    item--;
    if ((0 <= item) && (item <= processes.size()-1)) {
        cout << "Запуск программы " << processes.at(item).second.name << endl;
        BaseItem* ptr = &processes.at(item).second;
        TempItem* cp = dynamic_cast<TempItem*>(ptr);
        cp->run();
    } else {
        cout << "Такого пункта нет. Выход из программы." << endl;
        exit(0);
    }
}