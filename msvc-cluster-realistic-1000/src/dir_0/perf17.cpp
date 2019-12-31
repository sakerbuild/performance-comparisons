#include <Windows.h>
#include <vector>
#include <inc_5/header_114.h>
static_assert(sizeof(GenClass_114) > 0, "failed");
#include <inc_7/header_150.h>
static_assert(sizeof(GenClass_150) > 0, "failed");
#include <inc_7/header_140.h>
static_assert(sizeof(GenClass_140) > 0, "failed");
std::vector<int> perf_func_17() {
    LoadLibrary("abc.dll");
    return {17};
}
