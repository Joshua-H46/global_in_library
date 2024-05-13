# compile dynamic.o
g++ -std=c++17 -fpic -c dynamic1.cpp
g++ -std=c++17 -fpic -c dynamic2.cpp
g++ -std=c++17 -fpic -c dynamic3.cpp
g++ -std=c++17 -fpic -c dynamic4.cpp
g++ -std=c++17 -fpic -c dynamic5.cpp
# make a shared library
g++ -shared -o libdynamic3.so dynamic3.o
g++ -shared -o libdynamic4.so dynamic4.o 
g++ -shared -Wl,-Bsymbolic -o libdynamic5.so dynamic5.o 
g++ -shared -Wl,-rpath=. -o libdynamic1.so dynamic1.o -L./ -ldynamic3 -ldynamic4
g++ -shared -Wl,-rpath=. -o libdynamic2.so dynamic2.o -L./ -ldynamic4 -ldynamic5
# compile app.o
g++ -std=c++17 -c app.cpp
# link executable (-Wl means the next option is to the linker)
g++ -L./ -Wl,-rpath=.,-rpath-link=. app.o -ldynamic1 -ldynamic2 -o test_with_own_impl