#include <Windows.h>
#include <vector>
#include <inc_8/header_160.h>
static_assert(sizeof(GenClass_160) > 0, "failed");
#include <inc_8/header_164.h>
static_assert(sizeof(GenClass_164) > 0, "failed");
#include <inc_1/header_39.h>
static_assert(sizeof(GenClass_39) > 0, "failed");
#include <inc_1/header_28.h>
static_assert(sizeof(GenClass_28) > 0, "failed");
#include <inc_0/header_17.h>
static_assert(sizeof(GenClass_17) > 0, "failed");
std::vector<int> perf_func_235() {
    LoadLibrary("abc.dll");
    return {235};
}
