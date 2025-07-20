/*
Arithmetic operators in C are used to perform basic mathematical operations on variables and values.

Types are: 
1. addition -> +
2. subtraction -> -
3. multiplication -> *
4. division -> /
5. modulus -> %
*/

#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("Addition of %d + %d = %d\n", a, b, a + b);
    printf("Subtraction of %d - %d = %d\n", a, b, a - b);
    printf("Multiplication of %d * %d = %d\n", a, b, a * b);
    printf("Division of %d / %d = %d\n", a, b, a / b);
    printf("Remainder of %d mod %d = %d\n", a, b, a % b);
    return 0;
}