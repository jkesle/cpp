/* BASIC ARRAYS */


/*
MyType[size] -> "an array containing size elements of type MyType"
*/


#include <iostream>


// arr is an array containing 69 doubles
double arr[69];



// Elements can be accessed using the subscript operator [] or a pointer *
auto f() -> void {

    // darr -> array containing 4 doubles
    double darr[4] {5.0, 1.1, 5.4, 6.9};


    // the element at index 0 is now equal to 1.0
    darr[0] = 1.0;


    // p is a pointer to darr's first element. This works because an array's name acts as a pointer to its first element
    double *p {&darr[0]};


    // The element at index 1 has a value of 89.43. the pointer p is incremented once [++p] according to the size of the pointer's type.
    *++p = 89.43;


    for (double d : darr) {
        std::cout << d << '\n';
    }


    // NO AUTOMATIC BOUND CHECKING IN BASIC ARRAY. this results in undefined behavior
    double undef = darr[55];
}

auto foo() -> void {
    int g = 23;
    const int h {23}; // const int


    int iarr[g];  // ERROR!! Variable Length array not ISO specified
    int iarr2[h]; // h is a constant expr, OK
}



/*
OUTPUT

1
89.43
5.4
6.9
*/
auto main() -> int {
f();
foo();
}
