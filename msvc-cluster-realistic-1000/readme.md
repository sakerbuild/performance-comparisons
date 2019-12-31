# Realistic distributed C/C++ compilation performance test with MSVC

This test case contains 1000 C++ source files with an user include directory and 200 include files. The C++ source files are constructed to include random include files from the mentioned include directories as well as use `<Windows.h>` and `<vector>`.

The inclusion of the mentioned system headers is present to increase the compilation times of the source files to take comparably more time than the network cost of distributing the compilation tasks over the network.

The goal of this test case is to measure the distributed build performance and overhead of saker.build compared to the IncrediBuild tool for clean and incremental builds.

The results of the comparison is available [here]((https://saker.build/saker.msvc/doc/performancecomparison.html#build-cluster-realistic-example)).