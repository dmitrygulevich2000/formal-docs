cmake_minimum_required(VERSION 3.20)
project(cmake-project-layout)

set(CMAKE_CXX_STANDARD 23)

# dependencies
Include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.1.0
)
FetchContent_MakeAvailable(Catch2)

# flags
add_compile_options(-Werror)

add_compile_options(-fsanitize=address -fno-omit-frame-pointer -fconcepts-diagnostics-depth=2)
add_link_options(-fsanitize=address -fno-omit-frame-pointer)

# targets
include_directories(lib)
add_subdirectory(lib)

add_subdirectory(cmd)
