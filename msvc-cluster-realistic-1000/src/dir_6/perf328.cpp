#include <Windows.h>
#include <vector>
#include <inc_0/header_1.h>
static_assert(sizeof(GenClass_1) > 0, "failed");
#include <inc_6/header_120.h>
static_assert(sizeof(GenClass_120) > 0, "failed");
#include <inc_0/header_9.h>
static_assert(sizeof(GenClass_9) > 0, "failed");
std::vector<int> perf_func_328() {
    LoadLibrary("abc.dll");
    return {328};
}
