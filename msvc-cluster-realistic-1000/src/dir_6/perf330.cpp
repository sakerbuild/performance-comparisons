#include <Windows.h>
#include <vector>
#include <inc_1/header_30.h>
static_assert(sizeof(GenClass_30) > 0, "failed");
#include <inc_2/header_50.h>
static_assert(sizeof(GenClass_50) > 0, "failed");
#include <inc_1/header_33.h>
static_assert(sizeof(GenClass_33) > 0, "failed");
std::vector<int> perf_func_330() {
    LoadLibrary("abc.dll");
    return {330};
}
