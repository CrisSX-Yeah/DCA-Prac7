#define BOOST_TEST_MODULE StringUtilsTest
#include <boost/test/included/unit_test.hpp>
#include "StringUtils.hpp"

BOOST_AUTO_TEST_SUITE(VowelCountingTests)

BOOST_AUTO_TEST_CASE(CountVowelsInRegularStrings)
{
    BOOST_CHECK_EQUAL(StringUtils::countVowels("hello"), 2);
    BOOST_CHECK_EQUAL(StringUtils::countVowels("world"), 1);
}

BOOST_AUTO_TEST_CASE(CountVowelsInUppercaseStrings)
{
    BOOST_CHECK_EQUAL(StringUtils::countVowels("HELLO"), 2);
    BOOST_CHECK_EQUAL(StringUtils::countVowels("World"), 1);
}

BOOST_AUTO_TEST_CASE(CountVowelsInEmptyString)
{
    BOOST_CHECK_EQUAL(StringUtils::countVowels(""), 0);
}

BOOST_AUTO_TEST_CASE(CountVowelsInStringsWithNoVowels)
{
    BOOST_CHECK_EQUAL(StringUtils::countVowels("rhythm"), 0);
}

BOOST_AUTO_TEST_SUITE_END()
