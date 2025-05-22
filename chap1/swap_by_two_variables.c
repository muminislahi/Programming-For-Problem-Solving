#include <stdio.h>

int main() {

 
    int t;
    printf("Input the value of t  \n");
    scanf("%d",&t);
    
    int u;
    printf("Input the value of u \n");
    scanf("%d",&u);
    
    t=t+u;//37+56=93
    u=t-u;//u=93-56=37
    t=t-u;//t=93-37=56
    printf("t=%d and u=%d",t,u);

    return 0;
}
