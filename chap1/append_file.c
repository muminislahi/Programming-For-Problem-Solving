#include <stdio.h>
int main() {
    FILE *file = fopen("output.txt", "a");
    fprintf(file, "\nAppended Text.");
    fclose(file);
    return 0;
}