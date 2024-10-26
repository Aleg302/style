/*
    ЗА СТОЛОМ МОЛЧАЛИВЫЙ ДИАЛОГ
*/
#include <iostream>

#include "TemplateMenuItem.h"

#include "Process.h"

int main() {
    Process processes({{1, TemplateMenuItem("TEST")},
                       {2, TemplateMenuItem("TEST2")}});
}