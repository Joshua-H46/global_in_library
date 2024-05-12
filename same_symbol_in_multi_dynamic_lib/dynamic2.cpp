#include "dynamic2.h"
#include "dynamic4.h"
#include "dynamic5.h"
#include <iostream>

void func() {
    std::cout << "greetings from dynamic 2" << std::endl;
}

void foo2() {
    std::cout << "foo2" << std::endl;
    func();
    foo4();
    foo5();
}