#include <iostream>

#include "Begin.h"
#include "Test.h"

using namespace std;

int main() {
    cout << "Данная программа встроена в систему." << endl
         << "          Меню:" << endl
         << "0.  " << "Test, он же выход" << endl
         << "1.  " << "Begin" << endl
         << "Введите порядковый номер программы: ";
    
    int number = 0;
    cin >> number;

    switch(number) {
        case 0: 
            new Test();
            break;
        case 1: 
            new Begin();
            break;
        default:
            break;
    }
    
    cout << "Выход" << endl;
    return 0;
}