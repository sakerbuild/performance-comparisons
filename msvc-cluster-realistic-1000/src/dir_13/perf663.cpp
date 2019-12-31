#include <Windows.h>
#include <vector>
#include <inc_4/header_95.h>
static_assert(sizeof(GenClass_95) > 0, "failed");
#include <inc_6/header_130.h>
static_assert(sizeof(GenClass_130) > 0, "failed");
std::vector<int> perf_func_663() {
    LoadLibrary("abc.dll");
    return {663};
}
