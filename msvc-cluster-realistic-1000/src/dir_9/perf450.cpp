#include <Windows.h>
#include <vector>
#include <inc_8/header_162.h>
static_assert(sizeof(GenClass_162) > 0, "failed");
#include <inc_4/header_85.h>
static_assert(sizeof(GenClass_85) > 0, "failed");
std::vector<int> perf_func_450() {
    LoadLibrary("abc.dll");
    return {450};
}
