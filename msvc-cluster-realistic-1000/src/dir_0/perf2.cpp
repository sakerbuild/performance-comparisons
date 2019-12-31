#include <Windows.h>
#include <vector>
#include <inc_9/header_196.h>
static_assert(sizeof(GenClass_196) > 0, "failed");
#include <inc_5/header_107.h>
static_assert(sizeof(GenClass_107) > 0, "failed");
#include <inc_4/header_93.h>
static_assert(sizeof(GenClass_93) > 0, "failed");
#include <inc_0/header_9.h>
static_assert(sizeof(GenClass_9) > 0, "failed");
std::vector<int> perf_func_2() {
    LoadLibrary("abc.dll");
    return {2};
}
