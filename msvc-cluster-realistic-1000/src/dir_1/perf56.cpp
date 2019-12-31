#include <Windows.h>
#include <vector>
#include <inc_1/header_34.h>
static_assert(sizeof(GenClass_34) > 0, "failed");
#include <inc_2/header_48.h>
static_assert(sizeof(GenClass_48) > 0, "failed");
std::vector<int> perf_func_56() {
    LoadLibrary("abc.dll");
    return {56};
}
