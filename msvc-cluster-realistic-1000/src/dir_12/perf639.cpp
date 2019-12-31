#include <Windows.h>
#include <vector>
#include <inc_1/header_24.h>
static_assert(sizeof(GenClass_24) > 0, "failed");
#include <inc_2/header_57.h>
static_assert(sizeof(GenClass_57) > 0, "failed");
std::vector<int> perf_func_639() {
    LoadLibrary("abc.dll");
    return {639};
}
