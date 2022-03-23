/* Object Lifetime */

/*
Categories:
-> Automatic: objects declared within function scope are created when their declaration is encountered, and destroyed at the end of the function's scope

-> Static: objects declares in global or namespace scope or declared static within a function or class. created once and live througout the program's lifetime
    > address does not change throughout the program's lifetime

-> Free store: controlled directly by the programmer through "new" and "delete"
*/


#include <iostream>
#include <ostream>

class Examp {
    public:
    Examp() { // default ctor
        std::cout << "Constructor called\n";
    }
    Examp(int y) {
        std::cout << "Explicit Constructor called\n";
    }
    virtual ~Examp() {
        std::cout << "Destructor called\n";
    }
};

//Automatic
auto automatic() -> void {

    Examp ex;  // decalration reached, constructor called;

} // destructor called at end of scope

//Free store
auto freeStore() -> void {
    // constructor is called after memory is allocated;
    Examp *ctorDefault = new Examp; // pointer to examp returned through new operator, memory allocated on the free store (heap)
    // value initialized ctor;
    Examp *ctorExplicit = new Examp(69); //stdout explicit ctor


    std::cout << ctorDefault << '\n';
    std::cout << ctorExplicit << '\n';

    delete ctorDefault; //destructor called
    delete ctorExplicit; //destructor called

} // pointers exist until they go out of scope

// Static
auto stattic() -> void {
    static Examp ex; //default constructor called

} // destructor not called


/* Output:
Automatic lifetime

Constructor called
Destructor called
Static

Constructor called
Dynamic lifetime (free store)

Constructor called
Explicit Constructor called
Destructor called
Destructor called
Destructor called -> static destructor
*/
auto main() -> int {
    std::cout << "Automatic lifetime\n\n";
    automatic();
    std::cout << "Static\n\n";
    stattic();
    std::cout << "Dynamic lifetime (free store)\n\n";
    freeStore();
} // static destructor called here
