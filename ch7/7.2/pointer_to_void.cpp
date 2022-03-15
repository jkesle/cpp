/* POINTER TO VOID [void*] */



/*
void* -> "pointer to an object of unknown type"
-> Used when we want to store a pointer to a memory address without knowing the type of the object stored there

-> Can store a pointer to any object except for pointers to functions and pointers to class members

-> Pointers to void can be compared for equality/inequality, explicitly converted, and assigned to another void*
    however, all other operations will fail due to the ambiguity of what is stored at the memory location pointed to by void*

*/



auto f(char *c) -> void {


    void *p {c}; // char* is implicitly converted to void*


    void *pv {p}; // void* assigned to a void*;


    p == pv; // void* equality comparison with another void*


    //*p;// ERROR!! ISO C++ does not allow indirection on operand of type 'void *'


    //++p; // ERROR!! Arithmetic on a pointer to void


    char* p2 {(char*)(p)}; // explicit conversion back to char* [static_cast not used due to it not being encountered yet]


    //double* pd1 {p}; // ERROR!!


    //double* pd2 {p2}; // ERROR!!
}
