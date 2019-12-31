#include <Windows.h>
#include <vector>
#include <inc_7/header_145.h>
static_assert(sizeof(GenClass_145) > 0, "failed");
#include <inc_9/header_187.h>
static_assert(sizeof(GenClass_187) > 0, "failed");
std::vector<int> perf_func_675() {
    LoadLibrary("abc.dll");
    return {675};
}
