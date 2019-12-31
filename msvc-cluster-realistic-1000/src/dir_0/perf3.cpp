#include <Windows.h>
#include <vector>
#include <inc_9/header_194.h>
static_assert(sizeof(GenClass_194) > 0, "failed");
#include <inc_7/header_158.h>
static_assert(sizeof(GenClass_158) > 0, "failed");
#include <inc_0/header_13.h>
static_assert(sizeof(GenClass_13) > 0, "failed");
std::vector<int> perf_func_3() {
    LoadLibrary("abc.dll");
    return {3};
}
