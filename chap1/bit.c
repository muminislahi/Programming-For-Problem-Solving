#include<stdio.h>

int main() {
    int a = 5, b = 3;
    int result;

    result = a & b;
    printf("a & b = %d\n", result);

    result = a | b;
    printf("a | b = %d\n", result);

    result = a ^ b;
    printf("a ^ b = %d\n", result);

    result = a << 1;
    printf("a << 1 = %d\n", result);

    result = a >> 1;
    printf("a >> 1 = %d\n", result);

    result = ~a;
    printf("~a = %d\n", result);

    return 0;
}