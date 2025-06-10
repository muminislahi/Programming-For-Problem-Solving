#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1); // Input for the first number

    printf("Enter the second number: ");
    scanf("%d", &num2); // Input for the second number

    sum = num1 + num2; // Calculate the sum

    printf("The sum of %d and %d is %d\n", num1, num2, sum); // Display the result

    return 0;
}