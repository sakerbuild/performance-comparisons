#include <Windows.h>
#include <vector>
#include <inc_2/header_45.h>
static_assert(sizeof(GenClass_45) > 0, "failed");
#include <inc_6/header_130.h>
static_assert(sizeof(GenClass_130) > 0, "failed");
std::vector<int> perf_func_935() {
    LoadLibrary("abc.dll");
    return {935};
}
