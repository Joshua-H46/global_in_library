# compile static.o
g++ -std=c++17 -c static1.cpp
g++ -std=c++17 -c static2.cpp
g++ -std=c++17 -c static3.cpp
# make a static library
ar rcs libstatic1.a static1.o static3.o
ar rcs libstatic2.a static2.o static3.o
# compile main.o
g++ -std=c++17 -c main.cpp
# link executable (-Wl means the next option is to the linker)
g++ -L./ main.o -lstatic2 -lstatic1 -o test1