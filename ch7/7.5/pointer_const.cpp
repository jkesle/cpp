/* POINTERS AND CONST */


/*
A large portion of objects never have their values changed after initialization

-> A variable declared const is one that connot be assigned to "="... therefor, it must be initialized

*/



const int myNum {10}; // myNum cannot be reassigned to another value in this scope





//THE SCOPE OF THE CONST VARIABLE IS IMPORTANT





auto f(const int &y) -> void {

}


auto g() -> void {

    int z {5};


    f(z);  // z cannot be modified in the function scope of f();


    ++z; // z can be modified again

}



/*
POINTERS & CONST
*/

// Pointer declarations include the pointer and the object being pointed to.
int const *const p {&myNum};



// The above declaration can be said to be "a const pointer to a const int"


// p2 is a pointer to a const int and consequently can be changed

int const *p2 {&myNum};  // WARNING Variable 'p2' is non-const and globally accessible, consider making it const
