#include <Windows.h>
#include <vector>
#include <inc_8/header_165.h>
static_assert(sizeof(GenClass_165) > 0, "failed");
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
std::vector<int> perf_func_213() {
    LoadLibrary("abc.dll");
    return {213};
}
