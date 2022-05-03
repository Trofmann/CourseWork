cmake_minimum_required(VERSION 3.22)
project(CourseWork)

set(CMAKE_CXX_STANDARD 14)

add_executable(CourseWork main.cpp classes/TokensImmutableGroup.cpp classes/TokensImmutableGroup.h consts/consts.cpp consts/consts.h classes/TokensMutableGroup.cpp classes/TokensMutableGroup.h utils/utils.cpp utils/utils.h tests/tests.cpp tests/tests.h)
