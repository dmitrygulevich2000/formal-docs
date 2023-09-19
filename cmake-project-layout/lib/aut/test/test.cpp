#include <aut/src/automaton.hpp>

#include <catch2/catch_test_macros.hpp>

TEST_CASE("test") {
    CHECK(2 + 2 == 4);
}

TEST_CASE("A") {
    A a;
    CHECK(a.Get() == 42);
}
