#include <iostream>
#include "Emotion.h"
#include <locale>
using namespace std; 
#include <codecvt>
 
void Emotion::brutforce()
{
//setlocale(LC_ALL, "en_US.UTF-8");
//wchar_t codepoint;
for( wchar_t i = 0; i <= 0xffff; i++ ) {
    int val = i; // 0x1234
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::string u8str = converter.to_bytes(val);
    cout << u8str;
}
 

}