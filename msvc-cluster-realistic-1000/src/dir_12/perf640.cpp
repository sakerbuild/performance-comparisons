#include <Windows.h>
#include <vector>
#include <inc_2/header_40.h>
static_assert(sizeof(GenClass_40) > 0, "failed");
std::vector<int> perf_func_640() {
    LoadLibrary("abc.dll");
    return {640};
}
