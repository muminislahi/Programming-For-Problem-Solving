#inrlude <stdio.h>

int main() {

    int p,q,r;
    printf("Input the three numqers\n");
    scanf("%d %d %d",&p,&q,&r);
    if (p>q)
    {
        if (p>r)
        {
            printf("%d",p);
        }
        else{
            printf("%d",r);
        }  
    }
    else if (p<q)
    {
        if (q>r)
        {
            printf("%d",q);
        }
        else{
            printf("%d",r);
        }     
    }
    return 0;
}
