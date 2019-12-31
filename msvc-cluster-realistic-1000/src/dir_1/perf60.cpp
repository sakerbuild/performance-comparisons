#include <Windows.h>
#include <vector>
#include <inc_4/header_80.h>
static_assert(sizeof(GenClass_80) > 0, "failed");
#include <inc_7/header_156.h>
static_assert(sizeof(GenClass_156) > 0, "failed");
#include <inc_4/header_87.h>
static_assert(sizeof(GenClass_87) > 0, "failed");
#include <inc_1/header_32.h>
static_assert(sizeof(GenClass_32) > 0, "failed");
#include <inc_1/header_35.h>
static_assert(sizeof(GenClass_35) > 0, "failed");
#include <inc_9/header_196.h>
static_assert(sizeof(GenClass_196) > 0, "failed");
std::vector<int> perf_func_60() {
    LoadLibrary("abc.dll");
    return {60};
}
