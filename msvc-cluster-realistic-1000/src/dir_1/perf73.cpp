#include <Windows.h>
#include <vector>
#include <inc_5/header_100.h>
static_assert(sizeof(GenClass_100) > 0, "failed");
#include <inc_2/header_59.h>
static_assert(sizeof(GenClass_59) > 0, "failed");
#include <inc_5/header_103.h>
static_assert(sizeof(GenClass_103) > 0, "failed");
#include <inc_4/header_80.h>
static_assert(sizeof(GenClass_80) > 0, "failed");
#include <inc_6/header_122.h>
static_assert(sizeof(GenClass_122) > 0, "failed");
std::vector<int> perf_func_73() {
    LoadLibrary("abc.dll");
    return {73};
}
