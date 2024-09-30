#include <iostream>
#include "Emotion.h"
#include <locale>
using namespace std; 
#include <codecvt>
 #include <sstream>
void Emotion::brutforce()
{
    string s = "0x231A";
    unsigned int x;   
    std::stringstream ss;
    ss << std::hex << s;
    ss >> x;
   
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::string u8str = converter.to_bytes(x);
    cout << u8str;

 

}