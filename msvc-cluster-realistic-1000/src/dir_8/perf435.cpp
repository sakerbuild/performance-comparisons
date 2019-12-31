#include <Windows.h>
#include <vector>
#include <inc_3/header_64.h>
static_assert(sizeof(GenClass_64) > 0, "failed");
#include <inc_9/header_184.h>
static_assert(sizeof(GenClass_184) > 0, "failed");
std::vector<int> perf_func_435() {
    LoadLibrary("abc.dll");
    return {435};
}
