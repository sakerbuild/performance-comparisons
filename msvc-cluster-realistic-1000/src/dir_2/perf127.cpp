#include <Windows.h>
#include <vector>
#include <inc_0/header_12.h>
static_assert(sizeof(GenClass_12) > 0, "failed");
#include <inc_5/header_107.h>
static_assert(sizeof(GenClass_107) > 0, "failed");
#include <inc_1/header_26.h>
static_assert(sizeof(GenClass_26) > 0, "failed");
std::vector<int> perf_func_127() {
    LoadLibrary("abc.dll");
    return {127};
}
