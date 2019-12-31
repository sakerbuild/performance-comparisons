#include <Windows.h>
#include <vector>
#include <inc_2/header_41.h>
static_assert(sizeof(GenClass_41) > 0, "failed");
#include <inc_8/header_161.h>
static_assert(sizeof(GenClass_161) > 0, "failed");
std::vector<int> perf_func_86() {
    LoadLibrary("abc.dll");
    return {86};
}
