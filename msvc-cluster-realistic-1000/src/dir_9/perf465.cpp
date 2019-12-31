#include <Windows.h>
#include <vector>
#include <inc_6/header_120.h>
static_assert(sizeof(GenClass_120) > 0, "failed");
#include <inc_1/header_25.h>
static_assert(sizeof(GenClass_25) > 0, "failed");
std::vector<int> perf_func_465() {
    LoadLibrary("abc.dll");
    return {465};
}
