#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    while(n<m)
    {
         n++;
        if(n%2!=0)
        {
            printf(" %d ",n);
        }
    }
    
    return 0;
}
