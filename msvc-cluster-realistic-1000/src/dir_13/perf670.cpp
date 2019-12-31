#include <Windows.h>
#include <vector>
#include <inc_0/header_10.h>
static_assert(sizeof(GenClass_10) > 0, "failed");
#include <inc_6/header_123.h>
static_assert(sizeof(GenClass_123) > 0, "failed");
#include <inc_0/header_14.h>
static_assert(sizeof(GenClass_14) > 0, "failed");
#include <inc_9/header_187.h>
static_assert(sizeof(GenClass_187) > 0, "failed");
std::vector<int> perf_func_670() {
    LoadLibrary("abc.dll");
    return {670};
}
