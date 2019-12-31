# Large multi-project Java compilation performance test

This test case is based on the [Gradle large multi-project](https://github.com/gradle/performance-comparisons/tree/13739fa299e485c079335b0cd5b30da1cff92234/large-multiproject) performance test case.

It includes 99 Java subprojects in a single codebase. Each project can have cross-dependencies to other projects. We've modified the test case from Gradle in order to remove some unnecessary parts of the builds that may skew the results in favor of saker.build. See the `build.gradle` and `build.gradle_old` files to compare the removed parts.

The performance comparison includes both clean and incremental compilation scenarios.

The measurements for Gradle should be invoked with the `--parallel` flag as otherwise it could take much longer. (Based on our experience.)

The results of the comparison is available [here]((https://saker.build/saker.java.compiler/doc/performancecomparison.html#large-multi-project)).