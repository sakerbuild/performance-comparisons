#include <Windows.h>
#include <vector>
#include <inc_3/header_65.h>
static_assert(sizeof(GenClass_65) > 0, "failed");
#include <inc_5/header_109.h>
static_assert(sizeof(GenClass_109) > 0, "failed");
#include <inc_4/header_90.h>
static_assert(sizeof(GenClass_90) > 0, "failed");
std::vector<int> perf_func_807() {
    LoadLibrary("abc.dll");
    return {807};
}
