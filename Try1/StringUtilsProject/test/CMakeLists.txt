include_directories(${PROJECT_SOURCE_DIR}/include)

# Catch2 tests
add_executable(stringutils_tests_catch main.cpp test_reverse.cpp test_palindrome.cpp test_vowels.cpp)
target_link_libraries(stringutils_tests_catch stringutils)
add_test(NAME StringUtilsTests_Catch COMMAND stringutils_tests_catch)
