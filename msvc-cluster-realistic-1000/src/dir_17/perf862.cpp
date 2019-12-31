#include <Windows.h>
#include <vector>
#include <inc_6/header_128.h>
static_assert(sizeof(GenClass_128) > 0, "failed");
#include <inc_0/header_5.h>
static_assert(sizeof(GenClass_5) > 0, "failed");
std::vector<int> perf_func_862() {
    LoadLibrary("abc.dll");
    return {862};
}
