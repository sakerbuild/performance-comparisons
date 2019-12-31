#include <Windows.h>
#include <vector>
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
#include <inc_2/header_58.h>
static_assert(sizeof(GenClass_58) > 0, "failed");
std::vector<int> perf_func_160() {
    LoadLibrary("abc.dll");
    return {160};
}
