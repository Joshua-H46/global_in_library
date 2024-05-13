#include "dynamic1.h"
#include "dynamic3.h"
#include "dynamic4.h"
#include <iostream>

// void func() {
//     std::cout << "greetings from dynamic 1" << std::endl;
// }

void foo1() {
    std::cout << "foo1" << std::endl;
    func();
    foo3();
    foo4();
}