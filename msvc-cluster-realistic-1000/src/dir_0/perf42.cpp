#include <Windows.h>
#include <vector>
#include <inc_7/header_145.h>
static_assert(sizeof(GenClass_145) > 0, "failed");
#include <inc_7/header_153.h>
static_assert(sizeof(GenClass_153) > 0, "failed");
#include <inc_5/header_116.h>
static_assert(sizeof(GenClass_116) > 0, "failed");
std::vector<int> perf_func_42() {
    LoadLibrary("abc.dll");
    return {42};
}
