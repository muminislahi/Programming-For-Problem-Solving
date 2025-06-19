#include <stdio.h>
int main() {
    FILE *file = fopen("input.txt", "r");
    char c;
    int lines = 0;
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') lines++;
    }
    fclose(file);
    printf("Lines: %d\n", lines + 1);
    return 0;
}