check_PROGRAMS = test_reverse test_vowels test_palindrome \
                 test_reverse_boost test_vowels_boost test_palindrome_boost

# Catch2 tests
test_reverse_SOURCES = test_reverse.cpp main.cpp
test_reverse_CPPFLAGS = -I$(top_srcdir)/include
test_reverse_LDADD = $(top_builddir)/src/libstringutils.la

test_vowels_SOURCES = test_vowels.cpp main.cpp
test_vowels_CPPFLAGS = -I$(top_srcdir)/include
test_vowels_LDADD = $(top_builddir)/src/libstringutils.la

test_palindrome_SOURCES = test_palindrome.cpp main.cpp
test_palindrome_CPPFLAGS = -I$(top_srcdir)/include
test_palindrome_LDADD = $(top_builddir)/src/libstringutils.la

# Boost.Test tests
test_reverse_boost_SOURCES = test_reverse_boost.cpp
test_reverse_boost_CPPFLAGS = -I$(top_srcdir)/include
test_reverse_boost_LDADD = $(top_builddir)/src/libstringutils.la

test_vowels_boost_SOURCES = test_vowels_boost.cpp
test_vowels_boost_CPPFLAGS = -I$(top_srcdir)/include
test_vowels_boost_LDADD = $(top_builddir)/src/libstringutils.la

test_palindrome_boost_SOURCES = test_palindrome_boost.cpp
test_palindrome_boost_CPPFLAGS = -I$(top_srcdir)/include
test_palindrome_boost_LDADD = $(top_builddir)/src/libstringutils.la

# List all tests
TESTS = test_reverse test_vowels test_palindrome \
        test_reverse_boost test_vowels_boost test_palindrome_boost
