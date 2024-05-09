#include "static.h"
#include "dynamic.h"

std::string& GetGlobalStr() {
    return global_str;
}