#include <Windows.h>
#include <vector>
#include <inc_2/header_40.h>
static_assert(sizeof(GenClass_40) > 0, "failed");
#include <inc_5/header_109.h>
static_assert(sizeof(GenClass_109) > 0, "failed");
#include <inc_5/header_106.h>
static_assert(sizeof(GenClass_106) > 0, "failed");
#include <inc_3/header_78.h>
static_assert(sizeof(GenClass_78) > 0, "failed");
#include <inc_4/header_87.h>
static_assert(sizeof(GenClass_87) > 0, "failed");
std::vector<int> perf_func_220() {
    LoadLibrary("abc.dll");
    return {220};
}
