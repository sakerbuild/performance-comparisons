#include <Windows.h>
#include <vector>
#include <inc_1/header_28.h>
static_assert(sizeof(GenClass_28) > 0, "failed");
#include <inc_1/header_32.h>
static_assert(sizeof(GenClass_32) > 0, "failed");
#include <inc_8/header_173.h>
static_assert(sizeof(GenClass_173) > 0, "failed");
std::vector<int> perf_func_770() {
    LoadLibrary("abc.dll");
    return {770};
}
