#include <Windows.h>
#include <vector>
#include <inc_1/header_34.h>
static_assert(sizeof(GenClass_34) > 0, "failed");
std::vector<int> perf_func_500() {
    LoadLibrary("abc.dll");
    return {500};
}
