#include <Windows.h>
#include <vector>
#include <inc_9/header_192.h>
static_assert(sizeof(GenClass_192) > 0, "failed");
#include <inc_1/header_38.h>
static_assert(sizeof(GenClass_38) > 0, "failed");
#include <inc_4/header_94.h>
static_assert(sizeof(GenClass_94) > 0, "failed");
#include <inc_8/header_167.h>
static_assert(sizeof(GenClass_167) > 0, "failed");
std::vector<int> perf_func_348() {
    LoadLibrary("abc.dll");
    return {348};
}
