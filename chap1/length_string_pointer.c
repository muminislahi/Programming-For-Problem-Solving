#include <stdio.h>
int length(char *str) {
    char *ptr = str;
    while (*ptr != '\0') ptr++;
    return ptr - str;
}
int main() {
    char str[] = "Hello";
    printf("Length: %d\n", length(str));
    return 0;
}