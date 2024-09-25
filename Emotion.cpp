#include <iostream>
#include "Emotion.h"
#include <locale>
using namespace std; 
#include <codecvt>
 
void Emotion::brutforce()
{
//setlocale(LC_ALL, "en_US.UTF-8");
wchar_t codepoint;
for( wchar_t i = 0; i <= 0x00ff; i++ ) {
    std::wcout << "i" << std::endl;
}
 

}