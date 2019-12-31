#include <Windows.h>
#include <vector>
#include <inc_1/header_21.h>
static_assert(sizeof(GenClass_21) > 0, "failed");
#include <inc_4/header_85.h>
static_assert(sizeof(GenClass_85) > 0, "failed");
std::vector<int> perf_func_803() {
    LoadLibrary("abc.dll");
    return {803};
}
