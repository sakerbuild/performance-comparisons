#include <Windows.h>
#include <vector>
#include <inc_2/header_48.h>
static_assert(sizeof(GenClass_48) > 0, "failed");
#include <inc_5/header_114.h>
static_assert(sizeof(GenClass_114) > 0, "failed");
#include <inc_3/header_65.h>
static_assert(sizeof(GenClass_65) > 0, "failed");
std::vector<int> perf_func_833() {
    LoadLibrary("abc.dll");
    return {833};
}
