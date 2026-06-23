#!/usr/bin/env bash
# The below is the cmds where the build is done in the same src directory......
#g++ -c ./src/sum.cpp -o ./src/sum.0
#g++ -c ./src/subtract.cpp -o ./src/subtract.o
#g++ -c ./src/main.cpp -o ./src/main.o
#
#g++ ./src/main.o ./src/sum.o ./src/subtract.o -o ./src/main
#./src/main

#-----------------------------------------------------------
# Then this is the cmds
mkdir build
g++ -c -Iinclude/ipb_arithmatic/ src/sum.cpp -o build/sum.o #Here the 'Iinclude/' searches the header files in the directory include & itis an additional capability to find the location od header file, but in the library code file the 'Idir/' is included.......
g++ -c -Iinclude/ipb_arithmatic/ src/subtract.cpp -o build/subtract.o

# Then create an archive of the above two and create a library.....
ar rcs results/lib/libipb_arithmetic.a build/sum.o build/subtract.o

g++ -c -I/include/ src/main.cpp -o build/main.o


mkdir -p results/include/ipb_arithmetic
cp include/ipb_arithmetic/*.hpp results/include/ipb_arithmetic/
cp include/*.hpp results/include/

g++ build/main.o results/lib/libipb_arithmetic.a -o results/bin/main

./results/bin/main


