#!/bin/sh
cmake -DCMAKE_TOOLCHAIN_FILE="../../../../../../../../tools/cmake_toolchain_files/armgcc.cmake" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=ddr_release  .
make -j 2>&1 | tee build_log.txt
