#include <stdio.h>

int main()
{
    int n,m,i=0,sum=1;
    scanf("%d %d",&n,&m);
    while(i<m)
    {
      sum=sum*n;
      i++;
    }
    printf("%d",sum);
    return 0;
}
