#include <Windows.h>
#include <vector>
#include <inc_5/header_115.h>
static_assert(sizeof(GenClass_115) > 0, "failed");
#include <inc_1/header_22.h>
static_assert(sizeof(GenClass_22) > 0, "failed");
std::vector<int> perf_func_65() {
    LoadLibrary("abc.dll");
    return {65};
}
