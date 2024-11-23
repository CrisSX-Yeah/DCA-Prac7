#include "catch.hpp"
#include "StringUtils.hpp"

TEST_CASE("Vowel counting tests", "[vowels]") {

    SECTION("Count vowels in regular strings") {
        REQUIRE(StringUtils::countVowels("hello") == 2);
        REQUIRE(StringUtils::countVowels("world") == 1);
    }

    SECTION("Count vowels in strings with uppercase letters") {
        REQUIRE(StringUtils::countVowels("HELLO") == 2);
        REQUIRE(StringUtils::countVowels("World") == 1);
    }

    SECTION("Count vowels in empty string") {
        REQUIRE(StringUtils::countVowels("") == 0);
    }

    SECTION("Count vowels in strings with no vowels") {
        REQUIRE(StringUtils::countVowels("rhythm") == 0);
    }
}
