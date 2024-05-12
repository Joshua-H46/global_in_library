#include "static2.h"
#include "static3.h"

Tracer& GetGlobalTracer2() {
    std::cout << "from static2" << std::endl;
    return global_tracer;
}