#include "catch.hpp"
#include "StringUtils.hpp"

TEST_CASE("Reverse a regular string", "[reverse]") {
    REQUIRE(StringUtils::reverse("hello") == "olleh");
    REQUIRE(StringUtils::reverse("world") == "dlrow");
}

TEST_CASE("Reverse an empty string", "[reverse]") {
    REQUIRE(StringUtils::reverse("") == "");
}

TEST_CASE("Reverse a palindrome", "[reverse]") {
    REQUIRE(StringUtils::reverse("madam") == "madam");
}

TEST_CASE("Reverse with special characters", "[reverse]") {
    REQUIRE(StringUtils::reverse("123!abc") == "cba!321");
}

