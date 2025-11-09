#!/bin/bash

# --- 1. Cleanup ---
echo "Cleaning up..."
rm -rf obj_dir
rm -f *.vcd

verilator -Wall --cc --trace f1_fsm.sv --exe f1_fsm_tb.cpp

make -j -C obj_dir/ -f Vf1_fsm.mk Vf1_fsm

# run executable simulation file
obj_dir/Vf1_fsm


# --- 2. Find Google Test ---
# Use brew --prefix to find the path automatically
GTEST_PREFIX=$(brew --prefix googletest)

if [ "$GTEST_PREFIX" = "" ]; then
    echo "Error: googletest not found. Please run 'brew install googletest'"
    exit 1
fi

# --- 3. Translate Verilog to C++ (Verilate) ---
echo "Verilating f1_fsm.sv..."

# Check OS and set compiler/linker flags
if [ "$(uname -s)" = "Darwin" ]; then
    # macOS: Use C++17 and the dynamic GTEST_PREFIX paths
    verilator   -Wall --trace \
                -cc f1_fsm.sv \
                --exe verify.cpp \
                --prefix "Vdut" \
                -o Vdut \
                -CFLAGS "-std=c++17 -isystem ${GTEST_PREFIX}/include" \
                -LDFLAGS "-L${GTEST_PREFIX}/lib -lgtest -lgtest_main -lpthread"
else
    # Linux (assumed): Just needs C++17
    verilator   -Wall --trace \
                -cc f1_fsm.sv \
                --exe verify.cpp \
                --prefix "Vdut" \
                -o Vdut \
                -CFLAGS "-std=c++17" \
                -LDFLAGS "-lgtest -lgtest_main -lpthread"
fi

# --- 4. Build C++ Project ---
# The 'make' step will fail if Verilator failed, so we check for obj_dir
if [ -d "obj_dir" ]; then
    echo "Building executable..."
    # Build the executable 'Vdut' using the 'Vdut.mk' makefile
    make -j -C obj_dir/ -f Vdut.mk Vdut
else
    echo "Verilator failed, skipping build."
    exit 1
fi

# --- 5. Run Simulation ---
if [ -f "./obj_dir/Vdut" ]; then
    echo "Running simulation..."
    ./obj_dir/Vdut
else
    echo "Build failed, executable not found."
    exit 1
fi
