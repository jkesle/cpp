/* ARRAY INITIALIZERS */



// List initialization
auto f() -> void {


    // direct list initialization
    double ar[] {1.0, 2.0, 3.0, 4.0, 5.0};


    // copy initialization list. Does not allow narrowing  i.e., float -> int
    double arr[] = {1.0, 2.0, 3.0};


    // when a size is explicit, too many elements results in an error, too few will default the remaining values to 0
    double a[7] {1.0, 2.0, 3.0, 4.0}; // == {1.0, 2.0, 3.0, 4.0, 0.0, 0.0, 0.0};
}
