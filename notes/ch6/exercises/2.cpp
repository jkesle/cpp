#include <atomic>
#include <limits>
#include <iostream>
#include <vector>



// Write a program that prints signed if plain chars are signed on your implementation and unsigned otherwise.



auto areCharsSigned() -> void {

    bool isCharSigned {std::numeric_limits<char>::is_signed};

    std::cout << (isCharSigned ? "signed" : "unsigned");
}






auto main() -> int {

    areCharsSigned();

}
