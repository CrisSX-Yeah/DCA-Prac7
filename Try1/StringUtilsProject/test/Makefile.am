check_PROGRAMS = test_reverse test_vowels test_palindrome

test_reverse_SOURCES = test_reverse.cpp main.cpp
test_reverse_CPPFLAGS = -I$(top_srcdir)/include
test_reverse_LDADD = $(top_builddir)/src/libstringutils.la

test_vowels_SOURCES = test_vowels.cpp main.cpp
test_vowels_CPPFLAGS = -I$(top_srcdir)/include
test_vowels_LDADD = $(top_builddir)/src/libstringutils.la

test_palindrome_SOURCES = test_palindrome.cpp main.cpp
test_palindrome_CPPFLAGS = -I$(top_srcdir)/include
test_palindrome_LDADD = $(top_builddir)/src/libstringutils.la

TESTS = test_reverse test_vowels test_palindrome
