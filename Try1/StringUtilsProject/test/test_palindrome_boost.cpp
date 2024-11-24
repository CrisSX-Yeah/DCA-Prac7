#define BOOST_TEST_MODULE StringUtilsTest
#include <boost/test/included/unit_test.hpp>
#include "StringUtils.hpp"

BOOST_AUTO_TEST_SUITE(PalindromeTests)

BOOST_AUTO_TEST_CASE(SimplePalindromes)
{
    BOOST_CHECK(StringUtils::isPalindrome("madam"));
    BOOST_CHECK(StringUtils::isPalindrome("racecar"));
}

BOOST_AUTO_TEST_CASE(NonPalindromes)
{
    BOOST_CHECK(!StringUtils::isPalindrome("hello"));
    BOOST_CHECK(!StringUtils::isPalindrome("world"));
}

BOOST_AUTO_TEST_CASE(PalindromesWithMixedCasesAndSpaces)
{
    BOOST_CHECK(StringUtils::isPalindrome("A man a plan a canal Panama"));
    BOOST_CHECK(StringUtils::isPalindrome("No lemon, no melon"));
}

BOOST_AUTO_TEST_CASE(EmptyAndSingleCharacterStrings)
{
    BOOST_CHECK(StringUtils::isPalindrome(""));
    BOOST_CHECK(StringUtils::isPalindrome("a"));
}

BOOST_AUTO_TEST_SUITE_END()
