#include <Windows.h>
#include <vector>
#include <inc_6/header_120.h>
static_assert(sizeof(GenClass_120) > 0, "failed");
#include <inc_4/header_99.h>
static_assert(sizeof(GenClass_99) > 0, "failed");
#include <inc_9/header_182.h>
static_assert(sizeof(GenClass_182) > 0, "failed");
#include <inc_5/header_112.h>
static_assert(sizeof(GenClass_112) > 0, "failed");
std::vector<int> perf_func_667() {
    LoadLibrary("abc.dll");
    return {667};
}
