/* TYPE ALIASES */
#include <iostream>
// ptrInt is now an alias for the type int*
using ptrInt = int*;

// foo demonstrates that int* and ptrInt are equivalent types
auto foo() -> ptrInt {
    int *p = new int(69);
    ptrInt p2 = p;

    return p;
}

/*
Type aliases are synonyms for the type they are derived from. NOT DISTINCT
*/

//Older Syntax

// ptrFuncReturnBool is an alias to the type bool(*)() [a pointer to a function that takes no parameters and returns a boolean]
typedef bool(*ptrFuncReturnBool)(); //typedef syntax is older, however equivalent

auto bar() -> bool {
    return false;
};

// pfrb is a pointer to the bar function, which takes no parameters and returns a bool; the typealias is valid here
ptrFuncReturnBool pfrb = &bar;


/*
Specifiers such as unsigned, signed, etc cannot be used on an alias
*/


using integ = int;
// using UIntegerE = unsigned integ;  ERROR
using UIntegerV = unsigned int; // VALID
