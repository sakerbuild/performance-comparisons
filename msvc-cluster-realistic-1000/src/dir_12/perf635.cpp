#include <Windows.h>
#include <vector>
#include <inc_8/header_165.h>
static_assert(sizeof(GenClass_165) > 0, "failed");
#include <inc_3/header_78.h>
static_assert(sizeof(GenClass_78) > 0, "failed");
#include <inc_8/header_174.h>
static_assert(sizeof(GenClass_174) > 0, "failed");
std::vector<int> perf_func_635() {
    LoadLibrary("abc.dll");
    return {635};
}
