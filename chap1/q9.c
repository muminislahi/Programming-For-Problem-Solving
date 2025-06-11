#include<stdio.h>

int main() {
    int num, pos;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-indexed): ");
    scanf("%d", &pos);

    num = num ^ (1 << pos);

    printf("Result after toggling bit %d = %d\n", pos, num);

    return 0;
}