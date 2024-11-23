#ifndef STRING_UTILS_HPP
#define STRING_UTILS_HPP

#include <string>

class StringUtils {
public:
    static std::string reverse(const std::string& str);
    static bool isPalindrome(const std::string& str);
    static int countVowels(const std::string& str);
};

#endif // STRING_UTILS_HPP
