# 指定cmake的最低版本
cmake_minimum_required (VERSION 3.8)
#确定项目的名称
project(cmd-guessgame)
#将子文件夹src, check, game添加到工程中来
add_subdirectory(src)
add_subdirectory(game)
add_subdirectory(check)
#vscode下使用cmake需要的4行，作用待了解
add_definitions(-std=c++11)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXGLAGS} -O3 -Wall")
