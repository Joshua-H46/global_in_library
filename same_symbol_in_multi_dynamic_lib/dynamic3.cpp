#include "dynamic3.h"
#include <iostream>

void func() {
    std::cout << "greetings from dynamic 3" << std::endl;
}

void foo3() {
    std::cout << "foo3" << std::endl;
    func();
}