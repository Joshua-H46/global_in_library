#!/bin/bash
# compile static.o
g++ -std=c++17 -fpic -c static.cpp
# make a static library
ar rcs libstatic.a static.o
# compile dynamic.o
g++ -std=c++17 -fpic -c dynamic.cpp
# make also a static library
ar rcs libdynamic.a dynamic.o static.o
# compile main.o
g++ -std=c++17 -c main.cpp
# link executable (-Wl means the next option is to the linker)
g++ -L./  main.o -lstatic -ldynamic -o test_all_static2