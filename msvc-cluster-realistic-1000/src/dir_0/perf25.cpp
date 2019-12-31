#include <Windows.h>
#include <vector>
#include <inc_8/header_170.h>
static_assert(sizeof(GenClass_170) > 0, "failed");
#include <inc_9/header_181.h>
static_assert(sizeof(GenClass_181) > 0, "failed");
std::vector<int> perf_func_25() {
    LoadLibrary("abc.dll");
    return {25};
}
