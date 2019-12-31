#include <Windows.h>
#include <vector>
#include <inc_4/header_81.h>
static_assert(sizeof(GenClass_81) > 0, "failed");
#include <inc_2/header_55.h>
static_assert(sizeof(GenClass_55) > 0, "failed");
#include <inc_2/header_48.h>
static_assert(sizeof(GenClass_48) > 0, "failed");
std::vector<int> perf_func_224() {
    LoadLibrary("abc.dll");
    return {224};
}
