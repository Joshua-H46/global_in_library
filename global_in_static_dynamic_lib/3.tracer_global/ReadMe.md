In this example, we define a Tracer class to tell us everything. The Tracer global variable is defined in a static library.

We have a shared library which depends on the static library and offers an api to access the global tracer.

Then we build our executable and link it against both the static and shared libraries.

In this example, the tracer from the static library and the trace from the shared library are indeed the same one(with the same address). But it is constructed and destructed twice. Why?