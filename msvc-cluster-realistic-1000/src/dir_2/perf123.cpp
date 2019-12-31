#include <Windows.h>
#include <vector>
#include <inc_3/header_61.h>
static_assert(sizeof(GenClass_61) > 0, "failed");
#include <inc_3/header_68.h>
static_assert(sizeof(GenClass_68) > 0, "failed");
std::vector<int> perf_func_123() {
    LoadLibrary("abc.dll");
    return {123};
}
