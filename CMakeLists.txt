cmake_minimum_required(VERSION 3.15)
project(core)

set(CMAKE_CXX_STANDARD 17)

add_executable(core src/main.cpp deps/parser/src/SimuStandardParser.cpp deps/parser/src/SimuStandardParser.h deps/parser/src/IGameTurn.h)