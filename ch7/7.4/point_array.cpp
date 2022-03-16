/* POINTERS INTO ARRAYS */


/*
-> Pointers and arrays are closely related

-> an array's name acts as a pointer to its initial element -> this is known as decay


*/


#include <iostream>


auto f() -> void {


    int arr[] {1, 2, 3, 4, 5, 69};


    // array to pointer decay  ->  this is not good practice
    int *p {arr};


    // explicit conversion
    p = &arr[0];

    // evidence that arr is equal to a pointer to its first element
    bool b {arr == &arr[0]};

    std::cout << b; // 1 -> true


    // adding/subtracting from the pointer p advances and retracts the element it is pointing to respectively. the pointer is adjusted according to the size of the type of the array
    bool c {*++p == 2};

    std::cout << c; // 1 -> true
}
