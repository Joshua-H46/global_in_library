#include "static.h"
#include "dynamic.h"
#include <iostream>

int main() {
    std::cout << global_str << std::endl;
    std::cout << GetGlobalStr() << std::endl;
    return 0;
}