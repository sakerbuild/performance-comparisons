#include <Windows.h>
#include <vector>
#include <inc_0/header_8.h>
static_assert(sizeof(GenClass_8) > 0, "failed");
std::vector<int> perf_func_255() {
    LoadLibrary("abc.dll");
    return {255};
}
