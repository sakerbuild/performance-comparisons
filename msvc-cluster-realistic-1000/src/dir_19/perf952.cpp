#include <Windows.h>
#include <vector>
#include <inc_3/header_60.h>
static_assert(sizeof(GenClass_60) > 0, "failed");
#include <inc_1/header_24.h>
static_assert(sizeof(GenClass_24) > 0, "failed");
std::vector<int> perf_func_952() {
    LoadLibrary("abc.dll");
    return {952};
}
