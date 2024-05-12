#include "dynamic5.h"
#include <iostream>

void func() {
    std::cout << "greetings from dynamic 5" << std::endl;
}

void foo5() {
    std::cout << "foo5" << std::endl;
    func();
}