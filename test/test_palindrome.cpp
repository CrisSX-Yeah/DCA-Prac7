#include "catch.hpp"
#include "StringUtils.hpp"

TEST_CASE("Palindrome detection tests", "[palindrome]") {

    SECTION("Simple palindromes") {
        REQUIRE(StringUtils::isPalindrome("madam") == true);
        REQUIRE(StringUtils::isPalindrome("racecar") == true);
    }

    SECTION("Non-palindromes") {
        REQUIRE(StringUtils::isPalindrome("hello") == false);
        REQUIRE(StringUtils::isPalindrome("world") == false);
    }

    SECTION("Palindromes with mixed cases and spaces") {
        REQUIRE(StringUtils::isPalindrome("A man a plan a canal Panama") == true);
        REQUIRE(StringUtils::isPalindrome("No lemon, no melon") == true);
    }

    SECTION("Empty and single character strings") {
        REQUIRE(StringUtils::isPalindrome("") == true);
        REQUIRE(StringUtils::isPalindrome("a") == true);
    }
}
