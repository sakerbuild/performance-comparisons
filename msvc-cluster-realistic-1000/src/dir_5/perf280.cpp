#include <Windows.h>
#include <vector>
#include <inc_5/header_102.h>
static_assert(sizeof(GenClass_102) > 0, "failed");
#include <inc_4/header_88.h>
static_assert(sizeof(GenClass_88) > 0, "failed");
#include <inc_0/header_17.h>
static_assert(sizeof(GenClass_17) > 0, "failed");
#include <inc_4/header_91.h>
static_assert(sizeof(GenClass_91) > 0, "failed");
std::vector<int> perf_func_280() {
    LoadLibrary("abc.dll");
    return {280};
}
