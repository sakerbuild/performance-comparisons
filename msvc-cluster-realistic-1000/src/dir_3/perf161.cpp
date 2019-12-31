#include <Windows.h>
#include <vector>
#include <inc_7/header_150.h>
static_assert(sizeof(GenClass_150) > 0, "failed");
#include <inc_8/header_170.h>
static_assert(sizeof(GenClass_170) > 0, "failed");
#include <inc_8/header_162.h>
static_assert(sizeof(GenClass_162) > 0, "failed");
#include <inc_0/header_13.h>
static_assert(sizeof(GenClass_13) > 0, "failed");
std::vector<int> perf_func_161() {
    LoadLibrary("abc.dll");
    return {161};
}
