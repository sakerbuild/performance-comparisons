#include <Windows.h>
#include <vector>
#include <inc_0/header_4.h>
static_assert(sizeof(GenClass_4) > 0, "failed");
#include <inc_9/header_186.h>
static_assert(sizeof(GenClass_186) > 0, "failed");
#include <inc_5/header_101.h>
static_assert(sizeof(GenClass_101) > 0, "failed");
#include <inc_5/header_109.h>
static_assert(sizeof(GenClass_109) > 0, "failed");
std::vector<int> perf_func_109() {
    LoadLibrary("abc.dll");
    return {109};
}
