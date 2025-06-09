#include<stdio.h>

int main() {
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); // Integer division
    printf("a %% b = %d\n\n", a % b); // Modulus

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n\n", a <= b);

    // Logical Operators
    int x = 1, y = 0;
    printf("Logical Operators:\n");
    printf("x && y = %d\n", x && y); // Logical AND
    printf("x || y = %d\n", x || y); // Logical OR
    printf("!x = %d\n\n", !x); // Logical NOT

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b); // Bitwise AND
    printf("a | b = %d\n", a | b); // Bitwise OR
    printf("a ^ b = %d\n", a ^ b); // Bitwise XOR
    printf("~a = %d\n", ~a); // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left Shift
    printf("a >> 1 = %d\n\n", a >> 1); // Right Shift

    // Assignment Operators
    int c = 5;
    printf("Assignment Operators:\n");
    printf("c = %d\n", c);
    c += 2;
    printf("c += 2: %d\n", c);
    c -= 1;
    printf("c -= 1: %d\n", c);
    c *= 3;
    printf("c *= 3: %d\n", c);
    c /= 2;
    printf("c /= 2: %d\n", c);
    c %= 2;
    printf("c %%= 2: %d\n\n", c);

    // Miscellaneous Operators
    printf("Miscellaneous Operators:\n");
    printf("Size of a: %lu bytes\n", sizeof(a)); // sizeof operator
    int *ptr = &a;
    printf("Address of a using & operator: %p\n", ptr);
    printf("Value of a using * operator: %d\n\n", *ptr);

    // Increment and Decrement Operators
    printf("Increment and Decrement Operators:\n");
    printf("a = %d\n", a);
    printf("a++ = %d\n", a++); // Post-increment
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a); // Pre-increment
    printf("a-- = %d\n", a--); // Post-decrement
    printf("Now a = %d\n", a);
    printf("--a = %d\n", --a); // Pre-decrement

    return 0;
}
