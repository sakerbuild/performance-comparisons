#include <Windows.h>
#include <vector>
#include <inc_5/header_104.h>
static_assert(sizeof(GenClass_104) > 0, "failed");
#include <inc_8/header_179.h>
static_assert(sizeof(GenClass_179) > 0, "failed");
#include <inc_3/header_64.h>
static_assert(sizeof(GenClass_64) > 0, "failed");
std::vector<int> perf_func_698() {
    LoadLibrary("abc.dll");
    return {698};
}
