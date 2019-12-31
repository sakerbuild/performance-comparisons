#include <Windows.h>
#include <vector>
#include <inc_2/header_45.h>
static_assert(sizeof(GenClass_45) > 0, "failed");
#include <inc_0/header_14.h>
static_assert(sizeof(GenClass_14) > 0, "failed");
#include <inc_4/header_84.h>
static_assert(sizeof(GenClass_84) > 0, "failed");
std::vector<int> perf_func_520() {
    LoadLibrary("abc.dll");
    return {520};
}
