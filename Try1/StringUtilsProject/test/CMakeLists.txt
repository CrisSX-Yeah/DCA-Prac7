include_directories(${PROJECT_SOURCE_DIR}/include)

# Test suite: Reverse (Catch2)
add_executable(test_reverse main.cpp test_reverse.cpp)
target_link_libraries(test_reverse stringutils)
add_test(NAME ReverseTests COMMAND test_reverse)

# Test suite: Palindrome (Catch2)
add_executable(test_palindrome main.cpp test_palindrome.cpp)
target_link_libraries(test_palindrome stringutils)
add_test(NAME PalindromeTests COMMAND test_palindrome)

# Test suite: Vowel Counting (Catch2)
add_executable(test_vowels main.cpp test_vowels.cpp)
target_link_libraries(test_vowels stringutils)
add_test(NAME VowelTests COMMAND test_vowels)

# Ensure Boost is available
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})

    # Test suite: Reverse (Boost.Test)
    add_executable(test_reverse_boost test_reverse_boost.cpp)
    target_link_libraries(test_reverse_boost stringutils ${Boost_LIBRARIES})
    add_test(NAME ReverseTests_Boost COMMAND test_reverse_boost)

    # Test suite: Palindrome (Boost.Test)
    add_executable(test_palindrome_boost test_palindrome_boost.cpp)
    target_link_libraries(test_palindrome_boost stringutils ${Boost_LIBRARIES})
    add_test(NAME PalindromeTests_Boost COMMAND test_palindrome_boost)

    # Test suite: Vowel Counting (Boost.Test)
    add_executable(test_vowels_boost test_vowels_boost.cpp)
    target_link_libraries(test_vowels_boost stringutils ${Boost_LIBRARIES})
    add_test(NAME VowelTests_Boost COMMAND test_vowels_boost)
else()
    message(FATAL_ERROR "Boost libraries not found")
endif()
