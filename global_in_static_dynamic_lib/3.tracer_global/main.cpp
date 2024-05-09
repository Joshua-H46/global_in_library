#include "static.h"
#include "dynamic.h"

int main() {
    global_tracer.Print();
    GetGlobalTracer().Print();
    return 0;
}