#include <Windows.h>
#include <vector>
#include <inc_7/header_141.h>
static_assert(sizeof(GenClass_141) > 0, "failed");
#include <inc_3/header_75.h>
static_assert(sizeof(GenClass_75) > 0, "failed");
std::vector<int> perf_func_256() {
    LoadLibrary("abc.dll");
    return {256};
}
