#include <Windows.h>
#include <vector>
#include <inc_2/header_45.h>
static_assert(sizeof(GenClass_45) > 0, "failed");
#include <inc_3/header_73.h>
static_assert(sizeof(GenClass_73) > 0, "failed");
std::vector<int> perf_func_534() {
    LoadLibrary("abc.dll");
    return {534};
}
