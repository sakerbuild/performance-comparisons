#include <Windows.h>
#include <vector>
#include <inc_5/header_101.h>
static_assert(sizeof(GenClass_101) > 0, "failed");
#include <inc_5/header_115.h>
static_assert(sizeof(GenClass_115) > 0, "failed");
#include <inc_4/header_95.h>
static_assert(sizeof(GenClass_95) > 0, "failed");
std::vector<int> perf_func_890() {
    LoadLibrary("abc.dll");
    return {890};
}
