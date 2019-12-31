#include <Windows.h>
#include <vector>
#include <inc_2/header_40.h>
static_assert(sizeof(GenClass_40) > 0, "failed");
#include <inc_1/header_28.h>
static_assert(sizeof(GenClass_28) > 0, "failed");
#include <inc_8/header_167.h>
static_assert(sizeof(GenClass_167) > 0, "failed");
std::vector<int> perf_func_304() {
    LoadLibrary("abc.dll");
    return {304};
}
