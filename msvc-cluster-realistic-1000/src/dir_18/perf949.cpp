#include <Windows.h>
#include <vector>
#include <inc_2/header_42.h>
static_assert(sizeof(GenClass_42) > 0, "failed");
#include <inc_9/header_195.h>
static_assert(sizeof(GenClass_195) > 0, "failed");
std::vector<int> perf_func_949() {
    LoadLibrary("abc.dll");
    return {949};
}
