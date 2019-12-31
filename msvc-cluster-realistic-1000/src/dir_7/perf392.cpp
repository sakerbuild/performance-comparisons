#include <Windows.h>
#include <vector>
#include <inc_6/header_128.h>
static_assert(sizeof(GenClass_128) > 0, "failed");
std::vector<int> perf_func_392() {
    LoadLibrary("abc.dll");
    return {392};
}
