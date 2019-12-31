#include <Windows.h>
#include <vector>
#include <inc_3/header_70.h>
static_assert(sizeof(GenClass_70) > 0, "failed");
#include <inc_9/header_198.h>
static_assert(sizeof(GenClass_198) > 0, "failed");
std::vector<int> perf_func_122() {
    LoadLibrary("abc.dll");
    return {122};
}
