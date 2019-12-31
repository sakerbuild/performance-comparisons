#include <Windows.h>
#include <vector>
#include <inc_1/header_33.h>
static_assert(sizeof(GenClass_33) > 0, "failed");
#include <inc_5/header_111.h>
static_assert(sizeof(GenClass_111) > 0, "failed");
std::vector<int> perf_func_940() {
    LoadLibrary("abc.dll");
    return {940};
}
