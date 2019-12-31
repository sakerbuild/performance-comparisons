#include <Windows.h>
#include <vector>
#include <inc_8/header_164.h>
static_assert(sizeof(GenClass_164) > 0, "failed");
#include <inc_5/header_119.h>
static_assert(sizeof(GenClass_119) > 0, "failed");
std::vector<int> perf_func_446() {
    LoadLibrary("abc.dll");
    return {446};
}
