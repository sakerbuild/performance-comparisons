#include <Windows.h>
#include <vector>
#include <inc_4/header_82.h>
static_assert(sizeof(GenClass_82) > 0, "failed");
#include <inc_7/header_145.h>
static_assert(sizeof(GenClass_145) > 0, "failed");
std::vector<int> perf_func_735() {
    LoadLibrary("abc.dll");
    return {735};
}
