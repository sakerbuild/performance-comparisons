#include <Windows.h>
#include <vector>
#include <inc_4/header_90.h>
static_assert(sizeof(GenClass_90) > 0, "failed");
#include <inc_1/header_22.h>
static_assert(sizeof(GenClass_22) > 0, "failed");
#include <inc_7/header_150.h>
static_assert(sizeof(GenClass_150) > 0, "failed");
std::vector<int> perf_func_943() {
    LoadLibrary("abc.dll");
    return {943};
}
