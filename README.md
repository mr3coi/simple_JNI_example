# Simple JNI example program

Simple practice code for using Java JNI.
Implemented simple arithmetic functions in C++ code, and exploited them in a Java program.

### Notes

- Assumes that the code is run in Mac OS X machine (tested in *El Capitan*).
Otherwise, change the `-I` option to `gcc` in `Makefile`, as well as the `$EXT` (extension) of the shared library file as fits your OS.
- Refer to the following [link](https://www.protechtraining.com/content/java_fundamentals_tutorial-_java_native_interface_jni) for details.

### How to run

Run `make`

### TODO

- Fix the issue of using `iostream` in `JNIApp.cpp` (currently a linking error occurs)
- Change `const char *` to `std::string` (seems that it should work, but currently doesn't)
