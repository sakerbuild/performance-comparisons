#include <Windows.h>
#include <vector>
#include <inc_8/header_160.h>
static_assert(sizeof(GenClass_160) > 0, "failed");
#include <inc_2/header_45.h>
static_assert(sizeof(GenClass_45) > 0, "failed");
#include <inc_3/header_72.h>
static_assert(sizeof(GenClass_72) > 0, "failed");
#include <inc_4/header_84.h>
static_assert(sizeof(GenClass_84) > 0, "failed");
#include <inc_4/header_92.h>
static_assert(sizeof(GenClass_92) > 0, "failed");
#include <inc_8/header_169.h>
static_assert(sizeof(GenClass_169) > 0, "failed");
std::vector<int> perf_func_475() {
    LoadLibrary("abc.dll");
    return {475};
}
