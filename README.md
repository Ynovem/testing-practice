# Testing workshop

The goal of this project is to demonstrate unit testing for beginners.

## Coverage
Steps
```
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Coverage ..
make
cd test
./unit
cd ..
make coverage
```
