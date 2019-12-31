#include <Windows.h>
#include <vector>
#include <inc_3/header_63.h>
static_assert(sizeof(GenClass_63) > 0, "failed");
#include <inc_6/header_132.h>
static_assert(sizeof(GenClass_132) > 0, "failed");
#include <inc_1/header_23.h>
static_assert(sizeof(GenClass_23) > 0, "failed");
std::vector<int> perf_func_124() {
    LoadLibrary("abc.dll");
    return {124};
}
