/* MULTIDIMENSIONAL ARRAYS */


/*
Simplest definition->    an array of arrays
*/

#include <iostream>

auto f() -> void {

    // 2d array of chars.  arr is an array that has two elements... those elements are char arrays of size 2;
    char arr[2][2];


    // 2d array initialized with an initializer list
    char carr[][3] {{'a', 'b', 'c'}, {'e', 'f', 'g'}};

}


/*
2d ARRAYS AND STORAGE IN MEMORY

-> a 2d C style array is stored in the very familiar 1d array contigous format:

int matrix[3][3] {{1, 2, 3}, {4, 5, 6,}, {7, 8, 9}};
-> |1|2|3|4|5|6|7|8|9|  <- ACTUAL STORAGE OF ARRAY           <- Row-major order
   |arr1 |arr2 |arr3 |  <- compiler source representation


-> Contrast to the 1d array, the number of columns must be specified when initializing and passing a 2d array
    -> 1d:  int myarr[] {1, 2, 3};
    -> 2d:  int mymatrix[][2] {{1, 2}, {3, 4}};

    -> This is because...
        -> the declared type of an arrays elements must be complete. An array with an unspecified dimension is not a complete type

        -> As mentioned above, c++ is a row-major implemented language. Meaning each row's elements are placed contiguously after the previous row's elements
            Since the second row will be filled only after filling the first row in row-major implementation, when the number of columns is unknown,
            the compiler will never know when the second row should start, and thus it doesn't know which elements should go in the next row


        -> arrays when passed as an argument to a function are decayed into a pointer to their first element. So for example:

                                    auto foo(int[][] matrix) -> void {          argument type:   int (*matrix)[]

                                        ++matrix; <- if the number of columns is unknown, how many bytes do you increase this pointer by??

                                                        if for example there were 2 columns per row (int[][2] matrix), then when matrix is

                                                        incremented, the pointer should point to the memory address that is 8 bytes greater

                                                        than the current value of matrix.
                                    }

*/


auto foo() -> void {

    int matrix[][2] {1, 2, 3, 4, 5, 6};

    int (*p)[2] {matrix}; // pointer to matrix[0] == int[2];

    std::cout << p << '\n';  // the address of matrix's first element
    std::cout << *p << '\n'; // the address of matrix's first element's first element;


    int *p2 {*p};  // type at *p is int[2]. this decays into int*, demonstrated here


    std::cout << ++p2 << '\n'; // address of matrix's first element's second element;

    std::cout << **p << '\n'; // the value of *p (first element of matrix's first element) --- 1
    std::cout << *p2 << '\n'; // 2


    ++p; // p += 8 --- sizeof(int) == 4, number of columns = 2, p += 2(4) == 8


    std::cout << p << '\n';  // the address of matrix's second element
    std::cout << *p << '\n';  // same as p, the and it's the address of the second element's first element
    std::cout << **p << '\n'; // the value of *p --- 3
}

auto main() -> int {
    foo();
}
