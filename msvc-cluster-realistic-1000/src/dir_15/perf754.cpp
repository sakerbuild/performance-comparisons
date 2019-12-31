#include <Windows.h>
#include <vector>
#include <inc_0/header_16.h>
static_assert(sizeof(GenClass_16) > 0, "failed");
#include <inc_5/header_103.h>
static_assert(sizeof(GenClass_103) > 0, "failed");
std::vector<int> perf_func_754() {
    LoadLibrary("abc.dll");
    return {754};
}
