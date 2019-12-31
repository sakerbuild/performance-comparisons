#include <Windows.h>
#include <vector>
#include <inc_0/header_8.h>
static_assert(sizeof(GenClass_8) > 0, "failed");
#include <inc_3/header_60.h>
static_assert(sizeof(GenClass_60) > 0, "failed");
std::vector<int> perf_func_532() {
    LoadLibrary("abc.dll");
    return {532};
}
