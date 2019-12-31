#include <Windows.h>
#include <vector>
#include <inc_3/header_65.h>
static_assert(sizeof(GenClass_65) > 0, "failed");
#include <inc_1/header_32.h>
static_assert(sizeof(GenClass_32) > 0, "failed");
#include <inc_0/header_11.h>
static_assert(sizeof(GenClass_11) > 0, "failed");
std::vector<int> perf_func_199() {
    LoadLibrary("abc.dll");
    return {199};
}
