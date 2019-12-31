#include <Windows.h>
#include <vector>
#include <inc_6/header_124.h>
static_assert(sizeof(GenClass_124) > 0, "failed");
#include <inc_4/header_95.h>
static_assert(sizeof(GenClass_95) > 0, "failed");
#include <inc_5/header_109.h>
static_assert(sizeof(GenClass_109) > 0, "failed");
std::vector<int> perf_func_440() {
    LoadLibrary("abc.dll");
    return {440};
}
