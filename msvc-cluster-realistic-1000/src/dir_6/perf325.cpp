#include <Windows.h>
#include <vector>
#include <inc_0/header_4.h>
static_assert(sizeof(GenClass_4) > 0, "failed");
#include <inc_3/header_72.h>
static_assert(sizeof(GenClass_72) > 0, "failed");
#include <inc_1/header_30.h>
static_assert(sizeof(GenClass_30) > 0, "failed");
std::vector<int> perf_func_325() {
    LoadLibrary("abc.dll");
    return {325};
}
