#include "static.h"
#include "tracer.h"
#include "dynamic.h"

Tracer& GetGlobalTracer() {
    return global_tracer;
}