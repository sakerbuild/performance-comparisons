#include <Windows.h>
#include <vector>
#include <inc_1/header_33.h>
static_assert(sizeof(GenClass_33) > 0, "failed");
#include <inc_2/header_57.h>
static_assert(sizeof(GenClass_57) > 0, "failed");
#include <inc_4/header_86.h>
static_assert(sizeof(GenClass_86) > 0, "failed");
std::vector<int> perf_func_513() {
    LoadLibrary("abc.dll");
    return {513};
}
