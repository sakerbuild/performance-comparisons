#include <Windows.h>
#include <vector>
#include <inc_3/header_62.h>
static_assert(sizeof(GenClass_62) > 0, "failed");
#include <inc_0/header_4.h>
static_assert(sizeof(GenClass_4) > 0, "failed");
std::vector<int> perf_func_75() {
    LoadLibrary("abc.dll");
    return {75};
}
