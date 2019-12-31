#include <Windows.h>
#include <vector>
#include <inc_7/header_152.h>
static_assert(sizeof(GenClass_152) > 0, "failed");
#include <inc_9/header_180.h>
static_assert(sizeof(GenClass_180) > 0, "failed");
#include <inc_2/header_46.h>
static_assert(sizeof(GenClass_46) > 0, "failed");
std::vector<int> perf_func_601() {
    LoadLibrary("abc.dll");
    return {601};
}
