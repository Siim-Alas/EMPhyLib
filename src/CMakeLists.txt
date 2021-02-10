# CMakeList.txt : CMake project for EMPhyLib, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (EMPhyLib "EMPhyLib.cpp" "EMPhyLib.h" "Functions.cpp" "EMField/PointCharge.h" "LinearAlgebra/Vector3.h" "LinearAlgebra/Vector3.cpp" "EMField/PointCharge.cpp")

# TODO: Add tests and install targets if needed.
