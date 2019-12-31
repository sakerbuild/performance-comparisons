#include <Windows.h>
#include <vector>
#include <inc_0/header_6.h>
static_assert(sizeof(GenClass_6) > 0, "failed");
#include <inc_1/header_38.h>
static_assert(sizeof(GenClass_38) > 0, "failed");
#include <inc_5/header_112.h>
static_assert(sizeof(GenClass_112) > 0, "failed");
std::vector<int> perf_func_128() {
    LoadLibrary("abc.dll");
    return {128};
}
