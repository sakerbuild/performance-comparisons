#include <Windows.h>
#include <vector>
#include <inc_7/header_140.h>
static_assert(sizeof(GenClass_140) > 0, "failed");
#include <inc_9/header_185.h>
static_assert(sizeof(GenClass_185) > 0, "failed");
#include <inc_4/header_99.h>
static_assert(sizeof(GenClass_99) > 0, "failed");
#include <inc_8/header_172.h>
static_assert(sizeof(GenClass_172) > 0, "failed");
std::vector<int> perf_func_588() {
    LoadLibrary("abc.dll");
    return {588};
}
