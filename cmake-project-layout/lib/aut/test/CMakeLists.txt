add_executable(aut_test test.cpp)

target_link_libraries(aut_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(aut_test PUBLIC libaut)
