#include <Windows.h>
#include <vector>
#include <inc_4/header_95.h>
static_assert(sizeof(GenClass_95) > 0, "failed");
#include <inc_5/header_102.h>
static_assert(sizeof(GenClass_102) > 0, "failed");
std::vector<int> perf_func_85() {
    LoadLibrary("abc.dll");
    return {85};
}
