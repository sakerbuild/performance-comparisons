#include <Windows.h>
#include <vector>
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
#include <inc_8/header_174.h>
static_assert(sizeof(GenClass_174) > 0, "failed");
std::vector<int> perf_func_51() {
    LoadLibrary("abc.dll");
    return {51};
}
