#include <Windows.h>
#include <vector>
#include <inc_6/header_139.h>
static_assert(sizeof(GenClass_139) > 0, "failed");
#include <inc_9/header_188.h>
static_assert(sizeof(GenClass_188) > 0, "failed");
std::vector<int> perf_func_999() {
    LoadLibrary("abc.dll");
    return {999};
}
