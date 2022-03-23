/*
Given two char∗s pointing into an array, find and output the number of characters
between the two pointed-to characters (zero if they point to the same element).
*/

#include <iostream>

auto solution(char const *const (&&pointer1), char const *const (&&pointer2)) -> int64_t {
    return abs(pointer1-pointer2);
    
}

auto main() -> int {
    char str[] {"here is my string"};
    std::cout << solution(&str[9], &str[9]) << std::endl; // 0
}
