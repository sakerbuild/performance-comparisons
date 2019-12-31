#include <Windows.h>
#include <vector>
#include <inc_5/header_112.h>
static_assert(sizeof(GenClass_112) > 0, "failed");
#include <inc_0/header_0.h>
static_assert(sizeof(GenClass_0) > 0, "failed");
std::vector<int> perf_func_50() {
    LoadLibrary("abc.dll");
    return {50};
}
