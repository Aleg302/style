#include <iostream>
#include <fstream>
using namespace std;

void write_love_chars(int steps) {
    cout << "Пишем знаки" << endl << endl;

    string filename{"LoveRoad"};
    fstream file_stream{filename, file_stream.binary | 
                                  file_stream.trunc | 
                                  file_stream.in | 
                                  file_stream.out
    };
    
    string heart = "\u2665";
    for(int step = 1; step <= steps; step++) 
        file_stream << heart;
    
    cout << "Знаки записаны" << endl;
}

void read_love_chars(int steps) {
    cout << "Получаем знаки" << endl; 

    string filename{"LoveRoad"};
    fstream file_stream{filename, file_stream.binary | 
                                  file_stream.trunc | 
                                  file_stream.in | 
                                  file_stream.out
    };
    
    string heart = "\u2665";
    for(int step = 1; step <= steps; step++) {
        cout << heart << endl;
    }
    
    cout << "Знаки получены" << endl;   
}

int main() {
    cout << "Любовь на каждом шагу" << endl;
    cout << "1. Пишем" << endl
         << "2. Получаем" << endl;
    int set_or_get = 0;
    cin >> set_or_get;

    int steps = 0;
    cout << "Введите количество шагов: ";
    cin >> steps;
    cout << endl;

    switch(set_or_get) {
        case 1: {
                write_love_chars(steps);
                break;
            }
        case 2: {
                read_love_chars(steps);
                break;
            }
        default: cout << "Вводи верные данные." << endl
                      << "Выход..." << endl;
            break;
    }
    return 0;
}