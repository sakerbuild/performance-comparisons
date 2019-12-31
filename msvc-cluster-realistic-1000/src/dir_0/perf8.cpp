#include <Windows.h>
#include <vector>
#include <inc_0/header_16.h>
static_assert(sizeof(GenClass_16) > 0, "failed");
#include <inc_0/header_1.h>
static_assert(sizeof(GenClass_1) > 0, "failed");
#include <inc_4/header_80.h>
static_assert(sizeof(GenClass_80) > 0, "failed");
std::vector<int> perf_func_8() {
    LoadLibrary("abc.dll");
    return {8};
}
