/* STRUCTS */



/*
-> An array is an aggregate of elements of identical type

-> A struct can be thought of as an aggregate of elements of varying types
*/

#include <iostream>
#include <string.h>


// Three members of two different types   ->    unlike classes, structs have default public members
struct BankAccount {
    char const *name;
    char const *bank;
    double balance;

    auto operator==(BankAccount const &compare) const -> bool {
        return strcmp(this->name, compare.name ) == 0 &&
        strcmp(this->bank, compare.bank) == 0 &&
        this->balance == compare.balance;
    }
}; // terminated with a semi-colon



// struct members accesed via '.' operator, can be initialized using list initializer syntax
auto foo() -> void {

    BankAccount arnpalm {};

    arnpalm.name = {"arnold palmer"};

    arnpalm.bank = {"the arbitrary bank"};

    arnpalm.balance = {100.00};



    // struct initalized via list init
    BankAccount bjarne {
        "bjarne stroustrup (the man the myth the legend)",
        "another arbitrary bank", 1000000.00
    };


}




BankAccount const ba {"myname", "mybank", 25.00};
BankAccount const ba2 {"myname", "mybank", 25.00};


// Struct accessed via '->' through pointer
auto bar(BankAccount *const b) -> void {
    // b->name  ==  (*b).name;
    std::cout << b->name << '\n';
}



auto bar2(BankAccount &b) -> void {
    // b is a reference to ba and can be accessed via '.'
    std::cout << b.name << '\n';
}


// operator == overloaded to compare individual values, not the addresses;
bool const eq {ba == ba2};



auto main() -> int {
    std::cout << eq; // 1
}
