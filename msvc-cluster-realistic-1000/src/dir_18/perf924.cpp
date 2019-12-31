#include <Windows.h>
#include <vector>
#include <inc_3/header_64.h>
static_assert(sizeof(GenClass_64) > 0, "failed");
#include <inc_5/header_114.h>
static_assert(sizeof(GenClass_114) > 0, "failed");
std::vector<int> perf_func_924() {
    LoadLibrary("abc.dll");
    return {924};
}
