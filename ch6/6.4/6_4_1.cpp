/* lvalues and rvalues */




/*
identity and movabiity
> identity: the program has access to the name of, pointer to, or reference to an object;
> movable: the object can be moved from **(the object's value is moved to a different idenitifier and left in a "moved from" state)**


glvalue {identity} -> lvalue {identity and immovable}
||
V

xvalue {identity and movable}

/\
\\
rvalue {movable} -> prvalue {movable no identity}
*/

// expressions are either an lvalue or an rvalue, never both.
