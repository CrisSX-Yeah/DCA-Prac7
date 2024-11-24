include_directories(${PROJECT_SOURCE_DIR}/include)

# Test suite: Reverse
add_executable(test_reverse main.cpp test_reverse.cpp)
target_link_libraries(test_reverse stringutils)
add_test(NAME ReverseTests COMMAND test_reverse)

# Test suite: Palindrome
add_executable(test_palindrome main.cpp test_palindrome.cpp)
target_link_libraries(test_palindrome stringutils)
add_test(NAME PalindromeTests COMMAND test_palindrome)

# Test suite: Vowel Counting
add_executable(test_vowels main.cpp test_vowels.cpp)
target_link_libraries(test_vowels stringutils)
add_test(NAME VowelTests COMMAND test_vowels)
