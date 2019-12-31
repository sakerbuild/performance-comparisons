#include <Windows.h>
#include <vector>
#include <inc_2/header_52.h>
static_assert(sizeof(GenClass_52) > 0, "failed");
#include <inc_1/header_37.h>
static_assert(sizeof(GenClass_37) > 0, "failed");
std::vector<int> perf_func_201() {
    LoadLibrary("abc.dll");
    return {201};
}
