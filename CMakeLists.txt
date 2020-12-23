cmake_minimum_required(VERSION "3.16.3")

project(CPP-Simple-Math-Interpreter-V2)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_CURRENT_LIST_DIR})

add_executable(CPP-Simple-Math-Interpreter
    "main.cpp" "tokens.cpp"
    "lexer.cpp" "nodes.cpp"
    "parser.cpp" "values.cpp"
    "interpreter.cpp"
)