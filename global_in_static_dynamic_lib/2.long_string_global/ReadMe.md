In this example, a really long string global variable is defined in a static library.

We have a shared library which depends on the static library and offers an api to access the global string.

Then we build our executable and link it against both the static and shared libraries.

In this example, a segmentation fault occurs. Why?

We can build this with only static linking or dynamic linking, now everything looks good.