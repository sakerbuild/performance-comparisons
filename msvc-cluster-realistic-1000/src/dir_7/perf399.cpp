#include <Windows.h>
#include <vector>
#include <inc_9/header_192.h>
static_assert(sizeof(GenClass_192) > 0, "failed");
#include <inc_6/header_137.h>
static_assert(sizeof(GenClass_137) > 0, "failed");
#include <inc_2/header_47.h>
static_assert(sizeof(GenClass_47) > 0, "failed");
#include <inc_3/header_72.h>
static_assert(sizeof(GenClass_72) > 0, "failed");
#include <inc_4/header_95.h>
static_assert(sizeof(GenClass_95) > 0, "failed");
#include <inc_1/header_32.h>
static_assert(sizeof(GenClass_32) > 0, "failed");
std::vector<int> perf_func_399() {
    LoadLibrary("abc.dll");
    return {399};
}
