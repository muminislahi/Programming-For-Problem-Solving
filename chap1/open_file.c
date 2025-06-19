#include <stdio.h>
int main() {
    FILE *file = fopen("output.txt", "w");
    fprintf(file, "Hello, File Handling!");
    fclose(file);
    return 0;
}