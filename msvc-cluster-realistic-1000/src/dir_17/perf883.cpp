#include <Windows.h>
#include <vector>
#include <inc_8/header_164.h>
static_assert(sizeof(GenClass_164) > 0, "failed");
#include <inc_3/header_66.h>
static_assert(sizeof(GenClass_66) > 0, "failed");
#include <inc_4/header_88.h>
static_assert(sizeof(GenClass_88) > 0, "failed");
std::vector<int> perf_func_883() {
    LoadLibrary("abc.dll");
    return {883};
}
