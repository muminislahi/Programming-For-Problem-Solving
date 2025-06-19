#include <stdio.h>
int main() {
    FILE *file = fopen("input.txt", "r");
    char str[100];
    fgets(str, 100, file);
    printf("File Content: %s\n", str);
    fclose(file);
    return 0;
}