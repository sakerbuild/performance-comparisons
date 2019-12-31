#include <Windows.h>
#include <vector>
#include <inc_0/header_3.h>
static_assert(sizeof(GenClass_3) > 0, "failed");
#include <inc_4/header_81.h>
static_assert(sizeof(GenClass_81) > 0, "failed");
#include <inc_0/header_8.h>
static_assert(sizeof(GenClass_8) > 0, "failed");
std::vector<int> perf_func_387() {
    LoadLibrary("abc.dll");
    return {387};
}
