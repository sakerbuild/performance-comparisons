#include <Windows.h>
#include <vector>
#include <inc_3/header_60.h>
static_assert(sizeof(GenClass_60) > 0, "failed");
#include <inc_2/header_44.h>
static_assert(sizeof(GenClass_44) > 0, "failed");
std::vector<int> perf_func_746() {
    LoadLibrary("abc.dll");
    return {746};
}
