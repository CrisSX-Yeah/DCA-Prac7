#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>

TEST_CASE("Prueba simple", "[ejemplo]") {
    REQUIRE(1 + 1 == 2);
}
