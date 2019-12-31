#include <Windows.h>
#include <vector>
#include <inc_2/header_44.h>
static_assert(sizeof(GenClass_44) > 0, "failed");
#include <inc_1/header_21.h>
static_assert(sizeof(GenClass_21) > 0, "failed");
std::vector<int> perf_func_702() {
    LoadLibrary("abc.dll");
    return {702};
}
