#include <Windows.h>
#include <vector>
#include <inc_8/header_162.h>
static_assert(sizeof(GenClass_162) > 0, "failed");
#include <inc_5/header_112.h>
static_assert(sizeof(GenClass_112) > 0, "failed");
#include <inc_4/header_86.h>
static_assert(sizeof(GenClass_86) > 0, "failed");
#include <inc_5/header_117.h>
static_assert(sizeof(GenClass_117) > 0, "failed");
std::vector<int> perf_func_512() {
    LoadLibrary("abc.dll");
    return {512};
}
