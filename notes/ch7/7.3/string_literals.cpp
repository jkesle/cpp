/* STRING LITERALS */


/*
"THIS IS A STRING LITERAL"

-> have one more character than it seems, and that is the null character '\0';    '\0' == 0;   sizeof("hello") == 6;

-> the type of a string literal is as so:  for a string literal str  ->   const char[sizeof(str)];

-> Statically allocated!
*/



#include <iostream>

auto f() -> void {


    //  strlit is an array of size 12 of constant chars, string literals are immutable
    const char strlit[] {"hello world"};


    // for a guranteed immutable string
    char str[] {"trunk"};

    str[3] = 'c';

    // truck
    for (char c : str) {
    std::cout << c;
    }

}


/* RAW STRING LITERALS */


/*
-> Common characters like \n, \0, \a use the '\' aka the escape character

-> the raw string literal is of the form  ->    R"(ccccc)"   ->    where ccccc is a character sequence

-> characters like '\' and '"' are taken as literal characters.
*/



auto g() -> void {


    // Raw string literal, all characters are taken for what they literally are
    const char rawstr[] {R"(Word\Bird\"quotes")"};


    // Word\Bird\"quotes"
    for (char c : rawstr) {
        std::cout << c;
    }
}
