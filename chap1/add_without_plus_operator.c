#include<stdio.h>
int main (){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(b != 0)
    { 
        a++;
        b--;
    }
    printf("Sum: %d\n", a);
    return 0;
}