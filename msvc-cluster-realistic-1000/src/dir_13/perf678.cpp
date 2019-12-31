#include <Windows.h>
#include <vector>
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
#include <inc_3/header_65.h>
static_assert(sizeof(GenClass_65) > 0, "failed");
std::vector<int> perf_func_678() {
    LoadLibrary("abc.dll");
    return {678};
}
