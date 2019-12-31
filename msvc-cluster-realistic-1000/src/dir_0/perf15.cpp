#include <Windows.h>
#include <vector>
#include <inc_4/header_89.h>
static_assert(sizeof(GenClass_89) > 0, "failed");
#include <inc_1/header_25.h>
static_assert(sizeof(GenClass_25) > 0, "failed");
std::vector<int> perf_func_15() {
    LoadLibrary("abc.dll");
    return {15};
}
