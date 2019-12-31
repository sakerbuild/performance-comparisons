#include <Windows.h>
#include <vector>
#include <inc_2/header_53.h>
static_assert(sizeof(GenClass_53) > 0, "failed");
#include <inc_1/header_22.h>
static_assert(sizeof(GenClass_22) > 0, "failed");
#include <inc_0/header_2.h>
static_assert(sizeof(GenClass_2) > 0, "failed");
std::vector<int> perf_func_756() {
    LoadLibrary("abc.dll");
    return {756};
}
