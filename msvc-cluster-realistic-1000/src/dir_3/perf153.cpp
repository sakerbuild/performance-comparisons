#include <Windows.h>
#include <vector>
#include <inc_6/header_120.h>
static_assert(sizeof(GenClass_120) > 0, "failed");
#include <inc_5/header_109.h>
static_assert(sizeof(GenClass_109) > 0, "failed");
std::vector<int> perf_func_153() {
    LoadLibrary("abc.dll");
    return {153};
}
