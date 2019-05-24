#include<stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(isdigit(c)==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
