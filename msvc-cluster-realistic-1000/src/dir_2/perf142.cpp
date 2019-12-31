#include <Windows.h>
#include <vector>
#include <inc_4/header_98.h>
static_assert(sizeof(GenClass_98) > 0, "failed");
#include <inc_8/header_162.h>
static_assert(sizeof(GenClass_162) > 0, "failed");
std::vector<int> perf_func_142() {
    LoadLibrary("abc.dll");
    return {142};
}
