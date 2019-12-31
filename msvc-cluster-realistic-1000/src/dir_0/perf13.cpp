#include <Windows.h>
#include <vector>
#include <inc_0/header_4.h>
static_assert(sizeof(GenClass_4) > 0, "failed");
#include <inc_5/header_103.h>
static_assert(sizeof(GenClass_103) > 0, "failed");
#include <inc_3/header_65.h>
static_assert(sizeof(GenClass_65) > 0, "failed");
std::vector<int> perf_func_13() {
    LoadLibrary("abc.dll");
    return {13};
}
