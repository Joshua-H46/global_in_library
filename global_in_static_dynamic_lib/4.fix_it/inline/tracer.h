#pragma once
#include <iostream>

class Tracer {
public:
    Tracer() {
        std::cout << "Tracer constructor: " << this << std::endl;
    }

    ~Tracer() {
        std::cout << "Tracer destructor: " << this << std::endl;
    }

    void Print() {
        std::cout << this << std::endl;
    }
};