# need "src" dir to not to include test.cpp to sources
file(GLOB_RECURSE aut_src CONFIGURE_DEPENDS "src/*.cpp")

add_library(libaut ${aut_src})

target_compile_options(libaut PUBLIC --coverage)
target_link_options(libaut PUBLIC --coverage)

add_subdirectory(test)
