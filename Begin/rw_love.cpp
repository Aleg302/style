#include <iostream>
#include <fstream>

#include <sstream>
#include <string>
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
    string set_or_get;
    getline(cin, set_or_get);
 
    string steps;
    cout << "Введите количество шагов: ";
    getline(cin, steps);   
    cout << endl;

    switch(stoi(set_or_get)) {
        case 1: {
                write_love_chars(stoi(steps));
                break;
            }
        case 2: {
                read_love_chars(stoi(steps));
                break;
            }
        default: cout << "Вводи верные данные." << endl
                      << "Выход..." << endl;
            break;
    }
    return 0;
}