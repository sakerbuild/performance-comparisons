#include <Windows.h>
#include <vector>
#include <inc_7/header_140.h>
static_assert(sizeof(GenClass_140) > 0, "failed");
std::vector<int> perf_func_575() {
    LoadLibrary("abc.dll");
    return {575};
}
