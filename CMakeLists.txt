cmake_minimum_required(VERSION 3.19)

project(mathparser)

link_directories(mathparser "C:/src/winflexbison/CMakeBuildVS2019/flex/win_flex.dir/Release")

include_directories("C:/src/winflexbison/flex/src" "C:/src/winflexbison/bison/src" "C:/src/winflexbison")
add_executable(mathparser "calc.tab.c" "lex.yy.c")