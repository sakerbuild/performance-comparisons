# Compilation process scheduling performance test

This test case is supposed to compare the scheduling overhead of invoking the `cl.exe` compiler tool from the MSVC toolchain. It consists of 1000 small C source files that contain a single method each.

The performance scenario measures how efficiently saker.build can schedule the compiler processes compared to the Ninja build tool. The comparison is done for both clean and incremental builds.

The expected output of this scenario is that saker.build will be somewhat slower than Ninja, as the JVM surely introduces some overhed when invoking external processes. The goal is to reduce this overhead to the minimum.

The results of the comparison is available [here]((https://saker.build/saker.msvc/doc/performancecomparison.html#ninja)).