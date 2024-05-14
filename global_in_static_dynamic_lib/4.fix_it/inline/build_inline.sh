# compile static.o
g++ -std=c++17 -fpic -c static_inline.cpp
# make a static library
ar rcs libstatic_inline.a static_inline.o
# compile dynamic.o
g++ -std=c++17 -fpic -c dynamic.cpp
# make a shared library
g++ -shared -o libdynamic.so dynamic.o -L./ -lstatic_inline
# compile main.o
g++ -std=c++17 -c main.cpp
# link executable (-Wl means the next option is to the linker)
g++ -L./ -Wl,-rpath=. main.o -lstatic_inline -ldynamic -o test_inline