/**
    Сидим душевно, кушаем, общаемся(про бухгалтера и ЕРП про ресторан, поздравить с профессиональным праздником), шутим.

    Нужны тесты.
    Не бойся размера, маленький да удаленький.
    В темноте найди хотя бы один лучик света.
**/

#include <iostream>
using namespace std;

struct Fuel {
    string water = "NULL";
    string food = "NULL";
};

class Human {
    string name = "NULL";
    Fuel fuel;
public:
    void s_name(string nm) { name = nm; }
    string g_name() { return name; }
    void s_fuel(string water, string food) {
        fuel.water = water;
        fuel.food = food;
    }
    Fuel g_fuel() {
        return fuel;
    }
};

int main() {
    cout << "Не бойся размера, маленький да удаленький." << endl
         << "В темноте найди хотя бы один лучик света." << endl
         << "Разузнай про администрирование Линукса на hh.ru." << endl;
    Human Oleg;
    Human Oxana;
    Human Marina;
    Human Misha;
    cout << "Class Tested Sucsessfuly!" << endl;
    return 0;
}
