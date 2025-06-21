#include<stdio.h>
int f (int j)
{
    static int i = 50;
    int k;
    if (i==j)
    {

    printf("Something\n");
    k= f(i);
      return 0;
    }

    else return 0;
    }
int main ()
{
    int j;
    printf("Enter a number: ");
    scanf("%d", &j);
    f(j);
    return 0;
}