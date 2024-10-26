/*
    ЗА СТОЛОМ РАЗГОВОР(ДИАЛОГ)
*/
#include "TAnimal.h"
#include "TCat.h"
#include "TDog.h"
#include "TProcess.h"

int main() {
    Cat c("Tom");
    Dog d("Buffa");
    Process process;
    process.dialog(c);  // Tom: Meow!
    process.dialog(d);  // Buffa: Woof!
}