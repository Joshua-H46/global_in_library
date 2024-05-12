#include "app.h"
#include "dynamic1.h"
#include "dynamic2.h"
#include "dynamic3.h"
#include "dynamic4.h"
#include "dynamic5.h"
#include <iostream>

void func() {
    std::cout << "greetings from main" << std::endl;
}

int main() {
    func();
    foo1();
    foo2();
}