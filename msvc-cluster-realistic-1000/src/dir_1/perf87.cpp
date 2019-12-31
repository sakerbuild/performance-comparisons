#include <Windows.h>
#include <vector>
#include <inc_0/header_4.h>
static_assert(sizeof(GenClass_4) > 0, "failed");
#include <inc_1/header_22.h>
static_assert(sizeof(GenClass_22) > 0, "failed");
std::vector<int> perf_func_87() {
    LoadLibrary("abc.dll");
    return {87};
}
