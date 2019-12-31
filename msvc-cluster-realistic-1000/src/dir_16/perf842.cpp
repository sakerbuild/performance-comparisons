#include <Windows.h>
#include <vector>
#include <inc_5/header_106.h>
static_assert(sizeof(GenClass_106) > 0, "failed");
#include <inc_6/header_135.h>
static_assert(sizeof(GenClass_135) > 0, "failed");
#include <inc_3/header_62.h>
static_assert(sizeof(GenClass_62) > 0, "failed");
std::vector<int> perf_func_842() {
    LoadLibrary("abc.dll");
    return {842};
}
