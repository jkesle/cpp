/*
Write declarations for the following: a pointer to a character, an array of 10 integers, a
reference to an array of 10 integers, a pointer to an array of character strings, a pointer to a
pointer to a character, a constant integer, a pointer to a constant integer, and a constant
pointer to an integer. Initialize each one
*/

auto solution() -> void {


    // pointer to a character
    char c {'z'};
    char *pc {&c};


    // array of 10 integers
    int intarr[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    // reference to array of 10 ints
    int *intarrp {&intarr[0]};


    // pointer to array of character strings
    char *(*p)[] {nullptr};


    // pointer to pointer to character
    char **p2 {nullptr};


    //constant integer
    int const cint {34};


    // pointer to constant integer
    int const *p3 {&cint};


    // constant pointer to an integer
    int z {69};
    int *const p4 {&z};
}
