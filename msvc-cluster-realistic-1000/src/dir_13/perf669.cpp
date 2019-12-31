#include <Windows.h>
#include <vector>
#include <inc_8/header_168.h>
static_assert(sizeof(GenClass_168) > 0, "failed");
#include <inc_1/header_21.h>
static_assert(sizeof(GenClass_21) > 0, "failed");
std::vector<int> perf_func_669() {
    LoadLibrary("abc.dll");
    return {669};
}
