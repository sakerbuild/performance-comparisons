#include <Windows.h>
#include <vector>
#include <inc_1/header_21.h>
static_assert(sizeof(GenClass_21) > 0, "failed");
#include <inc_4/header_80.h>
static_assert(sizeof(GenClass_80) > 0, "failed");
std::vector<int> perf_func_5() {
    LoadLibrary("abc.dll");
    return {5};
}
