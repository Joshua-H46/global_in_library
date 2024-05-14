#pragma once

#include "tracer.h"

Tracer& __GetGlobalTracer() {
    static Tracer tracer;
    return tracer;
}

static Tracer& global_tracer = __GetGlobalTracer();