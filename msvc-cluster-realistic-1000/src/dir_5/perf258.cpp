#include <Windows.h>
#include <vector>
#include <inc_4/header_84.h>
static_assert(sizeof(GenClass_84) > 0, "failed");
#include <inc_5/header_113.h>
static_assert(sizeof(GenClass_113) > 0, "failed");
#include <inc_1/header_20.h>
static_assert(sizeof(GenClass_20) > 0, "failed");
#include <inc_2/header_56.h>
static_assert(sizeof(GenClass_56) > 0, "failed");
std::vector<int> perf_func_258() {
    LoadLibrary("abc.dll");
    return {258};
}
