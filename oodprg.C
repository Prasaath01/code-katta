#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        if(n%2==0)
        {
            printf("even");
        }
        else if(n%2!=0)
        {
            printf("odd");
        }
    }
    else
    {
        printf("invalid");
    }
}
