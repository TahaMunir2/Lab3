#!/bin/bash

# Find the location of the googletest installation
GTEST_PREFIX=$(brew --prefix googletest)

if [ "$GTEST_PREFIX" = "" ]; then
    echo "Error: googletest not found. Please run 'brew install googletest'"
    exit 1
fi

if [ "$(uname -s)" = "Darwin" ]; then
    # Use C++17 standard and the correct library paths
    g++ -std=c++17 -o main main.cpp \
        -isystem ${GTEST_PREFIX}/include \
        -L${GTEST_PREFIX}/lib \
        -lgtest -lgtest_main -pthread
else
    g++ -std=c++17 -o main main.cpp -lgtest -lgtest_main -pthread
fi

./main