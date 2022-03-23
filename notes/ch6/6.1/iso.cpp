/* ISO STANDARDS */


// IMPLEMENTATION DEFINED CONSTRUCTS


/*
-> Implementation defined constructs are those that depend on the architecture of the machine the c++ implementation is on

-> The stamdard defines alternatives that an implementation must choose from

-> The implementation MUST document with enough detail exatcly how that alternative is chosen
    so much so, the user can predict exactly what will happen in this specific case

-> An implementation that does not document all of the behavior specified as Implementation defined by the standard is considered non conforming
*/

#include <limits>



// The signed-ness of a char is implementation defined behavior...
const bool charSignedness {std::numeric_limits<char>::is_signed}; //true if signed, otherwise false.

// The Windows 11, x64 architecture, g++ implementation defines chars as signed






// UNSPECIFIED BEHAVIOR


/*
-> These constructs are similar to implementation-defined, differing in mandatory implementation documentation

-> the return value of "new" is unspecified, there is no way to predict the address returned
*/





// UNDEFINED BEHAVIOR


/*
-> Behavior deemed undefined is that which the standard doesn't impose what the program should or would do...

-> Renders a program erroneous/non-portable

*/
