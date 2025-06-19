#include <stdio.h>
#include <string.h>
void reverse(char *str) {
    char *end = str + strlen(str) - 1;
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}
int main() {
    char str[] = "Hello";
    reverse(str);
    printf("Reversed: %s\n", str);
    return 0;
}