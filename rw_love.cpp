#include <iostream>
using namespace std;

void write_love_chars() {
    cout << "Пишем знаки" << endl;
}

void read_love_chars() {
    cout << "Получаем знаки" << endl;

    cout << "Введите количество шагов: ";
    int steps = 0;
    cin >> steps;
    cout << endl;
    
}

int main() {
    cout << "Любовь на каждом шагу" << endl;
    cout << "1. Пишем" << endl
         << "2. Получаем" << endl;
    int set_or_get = 0;
    cin >> set_or_get;
    
    switch(set_or_get) {
        case 1: write_love_chars();
        case 2: read_love_chars();
        default: cout << "Вводи верные данные." << endl
                      << "Выход..." << endl;
    }
    return 0;
}