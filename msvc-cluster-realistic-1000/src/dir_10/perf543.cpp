#include <Windows.h>
#include <vector>
#include <inc_2/header_44.h>
static_assert(sizeof(GenClass_44) > 0, "failed");
#include <inc_6/header_132.h>
static_assert(sizeof(GenClass_132) > 0, "failed");
std::vector<int> perf_func_543() {
    LoadLibrary("abc.dll");
    return {543};
}
