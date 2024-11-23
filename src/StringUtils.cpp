#include "StringUtils.hpp"
#include <algorithm>
#include <cctype>

std::string StringUtils::reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

bool StringUtils::isPalindrome(const std::string& str) {
    std::string cleaned_str;
    // Remove non-alphanumeric characters and convert to lower case
    for (char c : str) {
        if (std::isalnum(c)) {
            cleaned_str += std::tolower(c);
        }
    }
    std::string reversed_str = reverse(cleaned_str);
    return cleaned_str == reversed_str;
}

int StringUtils::countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        char lower_c = std::tolower(c);
        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' ||
            lower_c == 'o' || lower_c == 'u') {
            ++count;
        }
    }
    return count;
}
