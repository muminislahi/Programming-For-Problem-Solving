#include <stdio.h>
int main() {
    int arr[5], search, found = 0;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Number found in the array.\n");
    } else {
        printf("Number not found in the array.\n");
    }
    return 0;
}