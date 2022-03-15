/* POINTERS */


/*
POINTER
-> a pointer in the simplest terms is an identifier that holds the memory address of an object of a given type
-> denoted with the '*' declarator operator
-> pointers can be stacked i.e., int** -> "a pointer to a pointer to an int"


MyType * -> "pointer to MyType"


*/



/*
DEREFERENCING
-> The main operation of used on a pointer. The dereference operator is the same as the declarator; '*'
-> It is used to access the object that is pointed at by the pointer


*/



/*
OPERATOR '&' -> "ADDRESS OF"
-> used on an object's identifier to return the object's memory address in hexadecimal.


*/



#include <vector>


// basic example
auto f() -> void {


    std::vector<double> v {1.0, 2.0, 3.0}; // a vector initialized with a list of 3 doubles


    std::vector<double> *p {&v}; // p is a pointer to a vector that contains doubles. It is initialized with the memory address of v, using the '&' operator


    std::vector<double> v2 {*p}; // the dereference operator returns the object held at the memory address p points to


    std::vector<double> **p2 {&p}; // p2 holds the address of the pointer p. it is a pointer to a pointer pointing to a vector of doubles


}
