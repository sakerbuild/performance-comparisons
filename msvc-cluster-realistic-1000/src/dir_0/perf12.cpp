#include <Windows.h>
#include <vector>
#include <inc_1/header_24.h>
static_assert(sizeof(GenClass_24) > 0, "failed");
#include <inc_3/header_67.h>
static_assert(sizeof(GenClass_67) > 0, "failed");
#include <inc_5/header_117.h>
static_assert(sizeof(GenClass_117) > 0, "failed");
std::vector<int> perf_func_12() {
    LoadLibrary("abc.dll");
    return {12};
}
