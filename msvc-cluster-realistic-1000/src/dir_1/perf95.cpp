#include <Windows.h>
#include <vector>
#include <inc_1/header_22.h>
static_assert(sizeof(GenClass_22) > 0, "failed");
#include <inc_1/header_23.h>
static_assert(sizeof(GenClass_23) > 0, "failed");
#include <inc_2/header_44.h>
static_assert(sizeof(GenClass_44) > 0, "failed");
std::vector<int> perf_func_95() {
    LoadLibrary("abc.dll");
    return {95};
}
