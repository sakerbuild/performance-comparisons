#include <Windows.h>
#include <vector>
#include <inc_2/header_45.h>
static_assert(sizeof(GenClass_45) > 0, "failed");
#include <inc_2/header_48.h>
static_assert(sizeof(GenClass_48) > 0, "failed");
std::vector<int> perf_func_282() {
    LoadLibrary("abc.dll");
    return {282};
}
