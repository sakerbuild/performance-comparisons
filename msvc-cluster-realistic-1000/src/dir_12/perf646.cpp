#include <Windows.h>
#include <vector>
#include <inc_9/header_180.h>
static_assert(sizeof(GenClass_180) > 0, "failed");
#include <inc_7/header_151.h>
static_assert(sizeof(GenClass_151) > 0, "failed");
std::vector<int> perf_func_646() {
    LoadLibrary("abc.dll");
    return {646};
}
