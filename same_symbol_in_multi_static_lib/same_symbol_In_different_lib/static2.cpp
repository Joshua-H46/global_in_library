#include "static2.h"
#include <iostream>

void func() {
    std::cout << "call func from static2" << std::endl;
}

void foo2() {
    std::cout << "call foo2 from static2" << std::endl;
    func();
}