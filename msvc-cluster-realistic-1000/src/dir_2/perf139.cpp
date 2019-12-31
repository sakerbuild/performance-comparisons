#include <Windows.h>
#include <vector>
#include <inc_2/header_42.h>
static_assert(sizeof(GenClass_42) > 0, "failed");
#include <inc_0/header_19.h>
static_assert(sizeof(GenClass_19) > 0, "failed");
std::vector<int> perf_func_139() {
    LoadLibrary("abc.dll");
    return {139};
}
