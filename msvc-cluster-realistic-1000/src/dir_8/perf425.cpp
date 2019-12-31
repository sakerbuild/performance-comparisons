#include <Windows.h>
#include <vector>
#include <inc_4/header_86.h>
static_assert(sizeof(GenClass_86) > 0, "failed");
#include <inc_8/header_169.h>
static_assert(sizeof(GenClass_169) > 0, "failed");
#include <inc_8/header_168.h>
static_assert(sizeof(GenClass_168) > 0, "failed");
std::vector<int> perf_func_425() {
    LoadLibrary("abc.dll");
    return {425};
}
