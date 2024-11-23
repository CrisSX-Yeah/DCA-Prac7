#include "catch.hpp"
#include "StringUtils.hpp"

TEST_CASE("Simple palindromes", "[palindrome]") {
    REQUIRE(StringUtils::isPalindrome("madam") == true);
    REQUIRE(StringUtils::isPalindrome("racecar") == true);
}

TEST_CASE("Non-palindromes", "[palindrome]") {
    REQUIRE(StringUtils::isPalindrome("hello") == false);
    REQUIRE(StringUtils::isPalindrome("world") == false);
}

TEST_CASE("Palindromes with mixed cases and spaces", "[palindrome]") {
    REQUIRE(StringUtils::isPalindrome("A man a plan a canal Panama") == true);
    REQUIRE(StringUtils::isPalindrome("No lemon, no melon") == true);
}

TEST_CASE("Empty and single character strings", "[palindrome]") {
    REQUIRE(StringUtils::isPalindrome("") == true);
    REQUIRE(StringUtils::isPalindrome("a") == true);
}
