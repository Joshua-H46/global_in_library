#include "static1.h"
#include <iostream>

void func() {
    std::cout << "call func from static1" << std::endl;
}

void foo1() {
    std::cout << "call foo1 from static1" << std::endl;
    func();
}