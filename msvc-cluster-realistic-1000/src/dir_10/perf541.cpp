#include <Windows.h>
#include <vector>
#include <inc_8/header_160.h>
static_assert(sizeof(GenClass_160) > 0, "failed");
std::vector<int> perf_func_541() {
    LoadLibrary("abc.dll");
    return {541};
}
