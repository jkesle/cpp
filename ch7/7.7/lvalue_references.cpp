#include <iostream>

auto f() -> void {
    int x {6}; // x is initialized to 6. (6 is an rvlaue)

    int &iref = x; // iref is an reference to the lvalue x. x has an identity, amd iref acts as an alias to x.

    ++iref; // ++ does NOT operate on the reference, rather the value stored by x; the lvalue that iref references

    std::cout << x << '\n'; // 7
    std::cout << iref << '\n'; // 7
}


//takes a reference to an int as a parameter, returns a reference to an int
auto incrementRef(int &a) -> void {
    ++a;
}


// copies the value of parameter into identifier a, leaving the original argument untouched
auto incrementVal(int a) -> void {
    ++a;
}

/* output:
7
7
1
1
2
*/
auto main() -> int {
    f();
    int b{1};
    std::cout << b << std::endl; // output 1 to the stdout
    incrementVal(b); // increment pass by value (copy)
    std::cout << b << std::endl; // output 1 to the stdout

    incrementRef(b); // increment pass by reference to b

    std::cout << b << std::endl; // output 2

}




/* CONST AND LVALUE REFERENCES */



// the initializer for a const lvalue reference does not need to be an lvalue of type T
const int &cref {25}; // legal syntax!


/*
-> implicit type conversion to T is applied if necessary
-> the resulting value is placed in a temporary variable of type T.
-> this temporary variable is used as the value of the initializer.

for the example cref above:
    the constant 25 is placed in a temp vairable of type int.

    int temp {25};
    const int &cref {temp};





-> const references refer to an lvalue that is readonly

*/
