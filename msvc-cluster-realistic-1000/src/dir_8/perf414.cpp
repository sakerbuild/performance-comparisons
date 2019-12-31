#include <Windows.h>
#include <vector>
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
#include <inc_1/header_20.h>
static_assert(sizeof(GenClass_20) > 0, "failed");
std::vector<int> perf_func_414() {
    LoadLibrary("abc.dll");
    return {414};
}
