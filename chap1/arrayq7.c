#include <stdio.h>
int main() {
    int arr[10], largest, secondLargest;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = secondLargest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element: %d\n", secondLargest);
    return 0;
}