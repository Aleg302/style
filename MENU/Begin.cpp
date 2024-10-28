#include "Begin.h"

#include "Test.h"
#include "Quadrate.h"

Begin::Begin() {
    Message();
    cout << endl << "          Меню:" << endl
         << endl << "0.  " << "Test" << endl
                 << "1.  " << "Quadrate" << endl
         << "Введите порядковый номер программы: ";
    
    int number = 0;
    cin >> number;

    switch(number) {
        case 0: 
            new Test();
            break;
        case 1:
            new Quadrate();
            break;
        default:
            break;
    }
}

void Begin::Message() {
    cout << endl << "ВЕЩЬэственное  число- это  математический ОБЪЕКТ," << endl <<
                    "а так же  число с плавающей  точкой. Они  обязаны" << endl <<
                    "быть   разЛИЧНЫМИ  (за  НА_ЛИЧНЫЕ).     Присвоить" << endl <<
                    "завладеть, самовольно взять в свою собственность." << endl <<
                    "Присвоить находку. Либо присвоить от себя."        << endl;
}