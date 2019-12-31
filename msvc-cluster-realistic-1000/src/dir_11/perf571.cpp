#include <Windows.h>
#include <vector>
#include <inc_5/header_111.h>
static_assert(sizeof(GenClass_111) > 0, "failed");
#include <inc_1/header_23.h>
static_assert(sizeof(GenClass_23) > 0, "failed");
#include <inc_3/header_71.h>
static_assert(sizeof(GenClass_71) > 0, "failed");
#include <inc_4/header_97.h>
static_assert(sizeof(GenClass_97) > 0, "failed");
std::vector<int> perf_func_571() {
    LoadLibrary("abc.dll");
    return {571};
}
