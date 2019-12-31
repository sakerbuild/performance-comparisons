#include <Windows.h>
#include <vector>
#include <inc_2/header_53.h>
static_assert(sizeof(GenClass_53) > 0, "failed");
#include <inc_4/header_99.h>
static_assert(sizeof(GenClass_99) > 0, "failed");
#include <inc_1/header_29.h>
static_assert(sizeof(GenClass_29) > 0, "failed");
std::vector<int> perf_func_135() {
    LoadLibrary("abc.dll");
    return {135};
}
