#include "static1.h"
#include "static3.h"

Tracer& GetGlobalTracer1() {
    std::cout << "from static1" << std::endl;
    return global_tracer;
}