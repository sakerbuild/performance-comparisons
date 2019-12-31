#include <Windows.h>
#include <vector>
#include <inc_9/header_188.h>
static_assert(sizeof(GenClass_188) > 0, "failed");
#include <inc_6/header_123.h>
static_assert(sizeof(GenClass_123) > 0, "failed");
#include <inc_7/header_140.h>
static_assert(sizeof(GenClass_140) > 0, "failed");
#include <inc_0/header_16.h>
static_assert(sizeof(GenClass_16) > 0, "failed");
std::vector<int> perf_func_837() {
    LoadLibrary("abc.dll");
    return {837};
}
