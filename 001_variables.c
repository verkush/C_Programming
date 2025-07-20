/*
In C programming, a variable is a named memory location used to store data that can be modified during program execution.

Types of Variables: 
1. Local Variable
2. Global Variable
3. Static Variable
4. Extern Variable
5. Register Variable
*/

#include <stdio.h>

int global = 10; // global variable

int main()
{
    int local = 10; // local variable
    static int s = 1; // static variable

    register int r = 0; // register variable
    
    return 0;
}