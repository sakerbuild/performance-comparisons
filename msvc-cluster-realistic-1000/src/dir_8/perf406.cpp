#include <Windows.h>
#include <vector>
#include <inc_2/header_45.h>
static_assert(sizeof(GenClass_45) > 0, "failed");
#include <inc_3/header_66.h>
static_assert(sizeof(GenClass_66) > 0, "failed");
#include <inc_3/header_68.h>
static_assert(sizeof(GenClass_68) > 0, "failed");
std::vector<int> perf_func_406() {
    LoadLibrary("abc.dll");
    return {406};
}
