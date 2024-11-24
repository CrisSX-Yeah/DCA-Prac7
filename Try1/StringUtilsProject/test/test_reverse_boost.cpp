#define BOOST_TEST_MODULE StringUtilsTest
#include <boost/test/included/unit_test.hpp>
#include "StringUtils.hpp"

BOOST_AUTO_TEST_SUITE(ReverseTests)

BOOST_AUTO_TEST_CASE(ReverseRegularStrings)
{
    BOOST_CHECK_EQUAL(StringUtils::reverse("hello"), "olleh");
    BOOST_CHECK_EQUAL(StringUtils::reverse("world"), "dlrow");
}

BOOST_AUTO_TEST_CASE(ReverseEmptyString)
{
    BOOST_CHECK_EQUAL(StringUtils::reverse(""), "");
}

BOOST_AUTO_TEST_CASE(ReversePalindrome)
{
    BOOST_CHECK_EQUAL(StringUtils::reverse("madam"), "madam");
}

BOOST_AUTO_TEST_CASE(ReverseWithSpecialCharacters)
{
    BOOST_CHECK_EQUAL(StringUtils::reverse("123!abc"), "cba!321");
}

BOOST_AUTO_TEST_SUITE_END()
