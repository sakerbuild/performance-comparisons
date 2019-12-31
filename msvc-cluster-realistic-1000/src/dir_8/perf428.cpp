#include <Windows.h>
#include <vector>
#include <inc_2/header_40.h>
static_assert(sizeof(GenClass_40) > 0, "failed");
#include <inc_4/header_96.h>
static_assert(sizeof(GenClass_96) > 0, "failed");
std::vector<int> perf_func_428() {
    LoadLibrary("abc.dll");
    return {428};
}
