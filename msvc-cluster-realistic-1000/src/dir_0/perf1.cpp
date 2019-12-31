#include <Windows.h>
#include <vector>
#include <inc_5/header_118.h>
static_assert(sizeof(GenClass_118) > 0, "failed");
#include <inc_7/header_156.h>
static_assert(sizeof(GenClass_156) > 0, "failed");
#include <inc_7/header_147.h>
static_assert(sizeof(GenClass_147) > 0, "failed");
#include <inc_9/header_184.h>
static_assert(sizeof(GenClass_184) > 0, "failed");
std::vector<int> perf_func_1() {
    LoadLibrary("abc.dll");
    return {1};
}
