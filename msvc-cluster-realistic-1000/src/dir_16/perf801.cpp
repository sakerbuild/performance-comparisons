#include <Windows.h>
#include <vector>
#include <inc_4/header_82.h>
static_assert(sizeof(GenClass_82) > 0, "failed");
#include <inc_2/header_56.h>
static_assert(sizeof(GenClass_56) > 0, "failed");
#include <inc_7/header_152.h>
static_assert(sizeof(GenClass_152) > 0, "failed");
std::vector<int> perf_func_801() {
    LoadLibrary("abc.dll");
    return {801};
}
