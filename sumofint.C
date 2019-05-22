#include <stdio.h>

int main()
{
   int i,n,k,sum=0,a[25];
   scanf("%d%d",&n,&k);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<=k;i++)
   {
       sum=sum+a[i];
   }
   printf("%d",sum);
}
