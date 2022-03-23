/* NULL POINTER [nullptr] */


/*

nullptr -> pointer that points to nothing

-> can be assigned to any pointer type

-> only one nullptr exists

*/

#include <iostream>

auto main() -> int {
    int *p {nullptr};

    
    std::cout << p; // 0
}
