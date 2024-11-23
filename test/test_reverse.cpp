#include "catch.hpp"
#include "StringUtils.hpp"

TEST_CASE("String reversal tests", "[reverse]") {

    SECTION("Reverse a regular string") {
        REQUIRE(StringUtils::reverse("hello") == "olleh");
        REQUIRE(StringUtils::reverse("world") == "dlrow");
    }

    SECTION("Reverse an empty string") {
        REQUIRE(StringUtils::reverse("") == "");
    }

    SECTION("Reverse a palindrome") {
        REQUIRE(StringUtils::reverse("madam") == "madam");
    }

    SECTION("Reverse with special characters") {
        REQUIRE(StringUtils::reverse("123!abc") == "cba!321");
    }
}
