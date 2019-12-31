#include <Windows.h>
#include <vector>
#include <inc_1/header_32.h>
static_assert(sizeof(GenClass_32) > 0, "failed");
#include <inc_3/header_60.h>
static_assert(sizeof(GenClass_60) > 0, "failed");
std::vector<int> perf_func_539() {
    LoadLibrary("abc.dll");
    return {539};
}
