#include "catch.hpp"
#include "StringUtils.hpp"

TEST_CASE("Count vowels in regular strings", "[vowels]") {
    REQUIRE(StringUtils::countVowels("hello") == 2);
    REQUIRE(StringUtils::countVowels("world") == 1);
}

TEST_CASE("Count vowels in strings with uppercase letters", "[vowels]") {
    REQUIRE(StringUtils::countVowels("HELLO") == 2);
    REQUIRE(StringUtils::countVowels("World") == 1);
}

TEST_CASE("Count vowels in empty string", "[vowels]") {
    REQUIRE(StringUtils::countVowels("") == 0);
}

TEST_CASE("Count vowels in strings with no vowels", "[vowels]") {
    REQUIRE(StringUtils::countVowels("rhythm") == 0);
}

