#include <Windows.h>
#include <vector>
#include <inc_4/header_80.h>
static_assert(sizeof(GenClass_80) > 0, "failed");
std::vector<int> perf_func_655() {
    LoadLibrary("abc.dll");
    return {655};
}
