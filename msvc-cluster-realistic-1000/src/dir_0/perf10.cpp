#include <Windows.h>
#include <vector>
#include <inc_1/header_35.h>
static_assert(sizeof(GenClass_35) > 0, "failed");
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
#include <inc_1/header_27.h>
static_assert(sizeof(GenClass_27) > 0, "failed");
#include <inc_6/header_134.h>
static_assert(sizeof(GenClass_134) > 0, "failed");
#include <inc_1/header_25.h>
static_assert(sizeof(GenClass_25) > 0, "failed");
std::vector<int> perf_func_10() {
    LoadLibrary("abc.dll");
    return {10};
}
