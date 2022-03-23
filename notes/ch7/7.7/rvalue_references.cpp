/* RVALUE REFERENCES  && */



/*
-> refers to a reference to a temperary object

*/

#include <iostream>

auto f(int &a) -> void {
    std::cout << "lvalue reference &a\n";
}

auto f(int const &a) -> void {
    std::cout << "int const &a\n";
}

// auto f(int &&a) -> void {
//     std::cout << "int &&a\n";
// }

auto main() -> int {
    int x {10};
    f(x);
    f(10);
}
