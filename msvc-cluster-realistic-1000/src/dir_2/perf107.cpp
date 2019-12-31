#include <Windows.h>
#include <vector>
#include <inc_8/header_160.h>
static_assert(sizeof(GenClass_160) > 0, "failed");
#include <inc_0/header_0.h>
static_assert(sizeof(GenClass_0) > 0, "failed");
#include <inc_0/header_2.h>
static_assert(sizeof(GenClass_2) > 0, "failed");
std::vector<int> perf_func_107() {
    LoadLibrary("abc.dll");
    return {107};
}
