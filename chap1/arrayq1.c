#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Array in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}