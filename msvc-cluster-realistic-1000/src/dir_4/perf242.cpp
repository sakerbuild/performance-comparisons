#include <Windows.h>
#include <vector>
#include <inc_4/header_96.h>
static_assert(sizeof(GenClass_96) > 0, "failed");
#include <inc_5/header_115.h>
static_assert(sizeof(GenClass_115) > 0, "failed");
std::vector<int> perf_func_242() {
    LoadLibrary("abc.dll");
    return {242};
}
