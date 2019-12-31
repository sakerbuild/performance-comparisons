#include <Windows.h>
#include <vector>
#include <inc_1/header_33.h>
static_assert(sizeof(GenClass_33) > 0, "failed");
#include <inc_1/header_32.h>
static_assert(sizeof(GenClass_32) > 0, "failed");
std::vector<int> perf_func_148() {
    LoadLibrary("abc.dll");
    return {148};
}
